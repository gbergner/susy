// -----------------------------------------------------------------
// Measure density of monopole world lines in non-diagonal cubes
#include "susy_includes.h"

void monopole() {
  register int i, dir, dir2;
  register site *s;
  int a, b, c, d, ip2;
  int total_mono_p[4], total_mono_m[4], total, total_abs;
  int *mono[NUMLINK][NUMLINK], *charge[NUMLINK];
  Real *phase[NUMLINK], p2, p3, total_phase, permm;
  double threePI = 3.0 * PI;
  double fivePI = 5.0 * PI;
  double sevenPI = 7.0 * PI;
  complex det_link;
  msg_tag *mtag0, *mtag1;

  for (dir = 0; dir < NUMLINK; dir++) {
    charge[dir] = malloc(sites_on_node * sizeof(int));
    phase[dir] = malloc(sites_on_node * sizeof(Real));
  }
  for (dir = 0; dir < NUMLINK; dir++) {
    for (dir2 = 0; dir2 < NUMLINK; dir2++)
      mono[dir][dir2] = malloc(sites_on_node * sizeof(int));
  }

  // First extract the U(1) part of the link
  for (dir = 0; dir < NUMLINK; dir++) {
    FORALLSITES(i, s) {
      det_link = find_det(&(s->linkf[dir]));
      phase[dir][i] = atan2(det_link.imag, det_link.real);
//      printf("XXX (%d, %d, %d, %d)[%d] %.6g %.6g %.6g\n",
//             s->x, s->y, s->z, s->t, dir,
//             det_link.real, det_link.imag, phase[dir][i]);
    }
  }

  // Next find the number of strings
  // penetrating the face of every plaquette
  for (dir = YUP; dir <= TUP; dir++) {    // Omit fifth link
    for (dir2 = XUP; dir2 < dir; dir2++) {
      mtag0 = start_gather_field(phase[dir2], sizeof(Real),
                                 goffset[dir], EVENANDODD, gen_pt[0]);
      mtag1 = start_gather_field(phase[dir], sizeof(Real),
                                 goffset[dir2], EVENANDODD, gen_pt[1]);

      wait_gather(mtag0);
      wait_gather(mtag1);
      FORALLSITES(i, s) {
        p2 = *((Real *)(gen_pt[0][i]));
        p3 = *((Real *)(gen_pt[1][i]));
        total_phase = phase[dir][i] + p2 - p3 - phase[dir2][i];
//        printf("YYY (%d, %d, %d, %d)[%d,%d] %.6g %.6g %.6g %.6g %.6g\n",
//               s->x, s->y, s->z, s->t, dir, dir2,
//               phase[dir][i], phase[dir2][i], p2, p3, total_phase);

        if (abs(total_phase) < PI)
          mono[dir][dir2][i] = 0;
        else if (total_phase >= PI && total_phase < threePI)
          mono[dir][dir2][i] = 1;
        else if (total_phase >= threePI && total_phase < fivePI)
          mono[dir][dir2][i] = 2;
        else if (total_phase >= fivePI && total_phase < sevenPI)
          mono[dir][dir2][i] = 3;
        else if (total_phase <= -PI && total_phase > -threePI)
          mono[dir][dir2][i] = -1;
        else if (total_phase <= -threePI && total_phase > -fivePI)
          mono[dir][dir2][i] = -2;
        else if (total_phase <= -fivePI && total_phase > -sevenPI)
          mono[dir][dir2][i] = -3;
        else {
          printf("monopole: total_phase %.4g out of bounds on node%d\n",
                 total_phase, this_node);
          terminate(1);
        }
        mono[dir2][dir][i] = -mono[dir][dir2][i];

        if (i == 0) {
          printf("ZZZ (%d, %d, %d, %d)[%d, %d] ",
                 s->x, s->y, s->z, s->t, dir, dir2);
          printf("%.6g - %.6g + %.6g - %.6g = %.6g --> %d\n",
                 phase[dir][i], phase[dir2][i], p2, p3,
                 total_phase, mono[dir][dir2][i]);
        }
      }
      cleanup_gather(mtag0);
      cleanup_gather(mtag1);
    }
  }

  // We have the number of strings penetrating every plaquette
  // Now tie these together into cubes,
  // using the first four components of the 5d epsilon
  for (a = 0; a < NUMLINK - 1; a++) {
    FORALLSITES(i, s)
      charge[a][i] = 0;

    for (b = 0; b < NUMLINK - 1; b++) {
      if (b != a) {
        for (c = 0; c < NUMLINK - 1; c++) {
          if (c == a || c == b)
            continue;
          for (d = 0; d < NUMLINK - 1; d++) {
            if (d == c || d == a || d == b)
              continue;

            permm = perm[a][b][c][d][NUMLINK - 1];
//            printf("CHECK perm[%d][%d][%d][%d] = %.1g \n",
//                   a, b, c, d, permm);

            mtag0 = start_gather_field(mono[c][d], sizeof(int),
                                       goffset[b], EVENANDODD, gen_pt[0]);

            wait_gather(mtag0);
            FORALLSITES(i, s) {
              ip2 = *((int *)(gen_pt[0][i]));
              if (permm > 0.0)
                charge[a][i] += (mono[c][d][i] - ip2);
              if (permm < 0.0)
                charge[a][i] -= (mono[c][d][i] - ip2);
//              if (s->x == 0 && s->y == 0 && s->z == 0 && s->t == 0) {
//                printf("a %d b %d c %d d %d %d %d\n",
//                       a, b, c, d, mono[c][d][i], ip2);
//              }
            }
            cleanup_gather(mtag0);
          }
        }
      }
    }
    FORALLSITES(i, s)       // Normalize for epsilon loops double-counting
      charge[a][i] /= 2.0;  // Should end up an integer
  }
//  FORALLSITES(i, s) {
//    for (dir = XUP; dir < NUMLINK - 1; dir++) {
//      if (charge[dir][i] != 0) {
//        printf("QQQ (%d, %d, %d, %d)[%d] %d\n",
//               s->x, s->y, s->z, s->t, dir, charge[dir][i]);
//      }
//    }
//  }

  // Finally accumulate and print global quantities
  total = 0;
  total_abs = 0;
  for (dir = XUP; dir < NUMLINK - 1; dir++) {
    total_mono_p[dir] = 0;
    total_mono_m[dir] = 0;
  }
  FORALLSITES(i, s) {
    for (dir = XUP; dir < NUMLINK - 1; dir++) {
      if (charge[dir][i] > 0)
        total_mono_p[dir] += charge[dir][i];
      if (charge[dir][i] < 0)
        total_mono_m[dir] += charge[dir][i];
    }
    // This is curious
    g_intsum(&total_mono_p[dir]);
    g_intsum(&total_mono_m[dir]);
  }

  total = 0;
  total_abs = 0;
  node0_printf("MONOPOLE ");
  for (dir = XUP; dir < NUMLINK - 1; dir++) {
    total += total_mono_p[dir] + total_mono_m[dir];
    total_abs += total_mono_p[dir] - total_mono_m[dir];
    node0_printf("%d %d  ", total_mono_p[dir], total_mono_m[dir]);
  }
  node0_printf("  %d %d\n", total, total_abs);

  for (dir = 0; dir < NUMLINK; dir++) {
    free(charge[dir]);
    free(phase[dir]);
    for (dir2 = 0; dir2 < NUMLINK; dir2++)
      free(mono[dir][dir2]);
  }
}
// -----------------------------------------------------------------
