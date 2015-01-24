// -----------------------------------------------------------------
// Coefficients for (Mdag M)^(-1 / 4) and (Mdag M)^(1 / 8)
// Note the relative sign between fractional powers!
// For now simply copy in remez-milc output, switch using DEGREE
#include "susy_includes.h"
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (16, 16) approximation for spectral range [1e-8, 500]
// gives errors 1.930801e-05 and 1.041969e-05
void setup_rhmc16() {
#if (DEGREE==16)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D16
  ampdeg4 = 1.1381159010033026e-01;
  amp4[0] = 3.1368159472751575e-07;
  amp4[1] = 1.0379530999595052e-06;
  amp4[2] = 3.5204088525061730e-06;
  amp4[3] = 1.2161267294531965e-05;
  amp4[4] = 4.2178820233516370e-05;
  amp4[5] = 1.4640197448322531e-04;
  amp4[6] = 5.0823420150569211e-04;
  amp4[7] = 1.7643855300805726e-03;
  amp4[8] = 6.1253014978322863e-03;
  amp4[9] = 2.1265356989361137e-02;
  amp4[10] = 7.3837101894856996e-02;
  amp4[11] = 2.5655149488194506e-01;
  amp4[12] = 8.9462506692149435e-01;
  amp4[13] = 3.1794853813938597e+00;
  amp4[14] = 1.2498457827198328e+01;
  amp4[15] = 8.6619350678171045e+01;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D16
  shift4[0] = 3.0953531724723071e-09;
  shift4[1] = 3.2795938372653606e-08;
  shift4[2] = 1.9256063818129346e-07;
  shift4[3] = 1.0330839936823528e-06;
  shift4[4] = 5.4515562886856692e-06;
  shift4[5] = 2.8677958895879417e-05;
  shift4[6] = 1.5077112610221722e-04;
  shift4[7] = 7.9257305620300371e-04;
  shift4[8] = 4.1663166435714485e-03;
  shift4[9] = 2.1901286631244025e-02;
  shift4[10] = 1.1513809297400175e-01;
  shift4[11] = 6.0553414333768751e-01;
  shift4[12] = 3.1912000088293651e+00;
  shift4[13] = 1.7001988143746424e+01;
  shift4[14] = 9.6054797054654543e+01;
  shift4[15] = 7.7286879486442081e+02;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D16
  ampdeg8 = 2.9494911750496193e+00;
  amp8[0] = -1.7136012216236198e-10;
  amp8[1] = -1.2563107620600530e-09;
  amp8[2] = -8.2232210589162282e-09;
  amp8[3] = -5.3270632033841020e-08;
  amp8[4] = -3.4454475959468017e-07;
  amp8[5] = -2.2278122600727856e-06;
  amp8[6] = -1.4404165626120535e-05;
  amp8[7] = -9.3130898892645903e-05;
  amp8[8] = -6.0214629647883369e-04;
  amp8[9] = -3.8933897609219549e-03;
  amp8[10] = -2.5179508445120392e-02;
  amp8[11] = -1.6302647327310787e-01;
  amp8[12] = -1.0618255992813443e+00;
  amp8[13] = -7.1361925243124160e+00;
  amp8[14] = -5.6704443064427061e+01;
  amp8[15] = -1.2090695069449530e+03;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D16
  shift8[0] = 5.5120928105623584e-09;
  shift8[1] = 4.6608799537982133e-08;
  shift8[2] = 2.6522612567650073e-07;
  shift8[3] = 1.4144756151399664e-06;
  shift8[4] = 7.4533787380240382e-06;
  shift8[5] = 3.9185205870294104e-05;
  shift8[6] = 2.0592218211268006e-04;
  shift8[7] = 1.0820533195127393e-03;
  shift8[8] = 5.6857659480019727e-03;
  shift8[9] = 2.9876957935385882e-02;
  shift8[10] = 1.5701008304618089e-01;
  shift8[11] = 8.2556258812535521e-01;
  shift8[12] = 4.3530078538410573e+00;
  shift8[13] = 2.3295001342641651e+01;
  shift8[14] = 1.3510213826105300e+02;
  shift8[15] = 1.3058126606253536e+03;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// Original (15, 15) approximation for spectral range [1e-7, 1000]
// gives errors 1.975834e-05 and 1.066076e-05
void setup_rhmc15() {
#if (DEGREE==15)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D15
  ampdeg4 = 9.5797060554725838e-02;
  amp4[0] = 1.7701746700099842e-06;
  amp4[1] = 5.8705983656937455e-06;
  amp4[2] = 1.9961158693570120e-05;
  amp4[3] = 6.9125367600088173e-05;
  amp4[4] = 2.4032965323696816e-04;
  amp4[5] = 8.3620125835371663e-04;
  amp4[6] = 2.9099006745502945e-03;
  amp4[7] = 1.0126504714418652e-02;
  amp4[8] = 3.5241454044660878e-02;
  amp4[9] = 1.2266034741624667e-01;
  amp4[10] = 4.2721681852328125e-01;
  amp4[11] = 1.4932820692676758e+00;
  amp4[12] = 5.3188766358452595e+00;
  amp4[13] = 2.0944763089672641e+01;
  amp4[14] = 1.4525770103354523e+02;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D15
  shift4[0] = 3.1085594175442315e-08;
  shift4[1] = 3.2994455960441383e-07;
  shift4[2] = 1.9424842756552213e-06;
  shift4[3] = 1.0453359626231250e-05;
  shift4[4] = 5.5337819905761986e-05;
  shift4[5] = 2.9204178440857227e-04;
  shift4[6] = 1.5403300046437174e-03;
  shift4[7] = 8.1233558140562465e-03;
  shift4[8] = 4.2840454273820550e-02;
  shift4[9] = 2.2594500626442715e-01;
  shift4[10] = 1.1921171782283737e+00;
  shift4[11] = 6.3026182343759860e+00;
  shift4[12] = 3.3683411978650057e+01;
  shift4[13] = 1.9083658214156412e+02;
  shift4[14] = 1.5386784635765257e+03;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D15
  ampdeg8 = 3.2148873149863206e+00;
  amp8[0] = -2.2977600408751347e-09;
  amp8[1] = -1.6898103706901084e-08;
  amp8[2] = -1.1099658368596436e-07;
  amp8[3] = -7.2162146587729939e-07;
  amp8[4] = -4.6841070484595924e-06;
  amp8[5] = -3.0396303865820389e-05;
  amp8[6] = -1.9723870959636086e-04;
  amp8[7] = -1.2798599250624023e-03;
  amp8[8] = -8.3051856063983548e-03;
  amp8[9] = -5.3904877281192094e-02;
  amp8[10] = -3.5026088217184553e-01;
  amp8[11] = -2.2893521967679966e+00;
  amp8[12] = -1.5436668340425719e+01;
  amp8[13] = -1.2297861076048798e+02;
  amp8[14] = -2.6252652966414048e+03;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D15
  shift8[0] = 5.5367335615411457e-08;
  shift8[1] = 4.6910257304582898e-07;
  shift8[2] = 2.6768223190551614e-06;
  shift8[3] = 1.4319657256375662e-05;
  shift8[4] = 7.5694473187855338e-05;
  shift8[5] = 3.9922490005559548e-04;
  shift8[6] = 2.1046795395127538e-03;
  shift8[7] = 1.1094832053548640e-02;
  shift8[8] = 5.8486687698920667e-02;
  shift8[9] = 3.0834388405073770e-01;
  shift8[10] = 1.6264534005778293e+00;
  shift8[11] = 8.6030459456576764e+00;
  shift8[12] = 4.6179583183155444e+01;
  shift8[13] = 2.6854965277696181e+02;
  shift8[14] = 2.6004158696112045e+03;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (14, 14) approximation for spectral range [1e-6, 1900]
// gives errors 1.977763e-05 and 1.066894e-05
void setup_rhmc14() {
#if (DEGREE==14)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D14
  ampdeg4 = 8.1598413078092485e-02;
  amp4[0] = 9.9559072355053982e-06;
  amp4[1] = 3.3020873814450802e-05;
  amp4[2] = 1.1228922464674402e-04;
  amp4[3] = 3.8889737223977793e-04;
  amp4[4] = 1.3522272956591416e-03;
  amp4[5] = 4.7054168325320854e-03;
  amp4[6] = 1.6376156539288457e-02;
  amp4[7] = 5.6996535157360306e-02;
  amp4[8] = 1.9840054510008215e-01;
  amp4[9] = 6.9108460559199147e-01;
  amp4[10] = 2.4158405846450672e+00;
  amp4[11] = 8.6057190620501967e+00;
  amp4[12] = 3.3890251374088386e+01;
  amp4[13] = 2.3504525036382458e+02;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D14
  shift4[0] = 3.1091202709754253e-07;
  shift4[1] = 3.3002898614760278e-06;
  shift4[2] = 1.9432032603545606e-05;
  shift4[3] = 1.0458587783334595e-04;
  shift4[4] = 5.5372970932160166e-04;
  shift4[5] = 2.9226725474850892e-03;
  shift4[6] = 1.5417338259536074e-02;
  shift4[7] = 8.1319833302107583e-02;
  shift4[8] = 4.2894955441522714e-01;
  shift4[9] = 2.2635077002645363e+00;
  shift4[10] = 1.1968587669408299e+01;
  shift4[11] = 6.3972780834435760e+01;
  shift4[12] = 3.6248731018040093e+02;
  shift4[13] = 2.9229220219690665e+03;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D14
  ampdeg8 = 3.4833964183109063e+00;
  amp8[0] = -3.0646798675863912e-08;
  amp8[1] = -2.2540506364463865e-07;
  amp8[2] = -1.4807666706649540e-06;
  amp8[3] = -9.6280583331478298e-06;
  amp8[4] = -6.2504115748529369e-05;
  amp8[5] = -4.0565391295931943e-04;
  amp8[6] = -2.6325875514359208e-03;
  amp8[7] = -1.7085316119792183e-02;
  amp8[8] = -1.1090581156412292e-01;
  amp8[9] = -7.2072584558682851e-01;
  amp8[10] = -4.7113174344226216e+00;
  amp8[11] = -3.1771032521212383e+01;
  amp8[12] = -2.5313092054773401e+02;
  amp8[13] = -5.4038833200814788e+03;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D14
  shift8[0] = 5.5375630289984406e-07;
  shift8[1] = 4.6920420070699977e-06;
  shift8[2] = 2.6776516882928181e-05;
  shift8[3] = 1.4325573307166637e-04;
  shift8[4] = 7.5733807345999859e-04;
  shift8[5] = 3.9947542464893859e-03;
  shift8[6] = 2.1062339071416580e-02;
  shift8[7] = 1.1104428086980997e-01;
  shift8[8] = 5.8549391447179067e-01;
  shift8[9] = 3.0886978107077443e+00;
  shift8[10] = 1.6339251970144741e+01;
  shift8[11] = 8.7715121296249336e+01;
  shift8[12] = 5.1013904863747950e+02;
  shift8[13] = 4.9400764934764347e+03;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (12, 12) approximation for spectral range [5e-5, 2500]
// gives errors 1.651364e-05 and 8.903595e-06
void setup_rhmc12() {
#if (DEGREE==12)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D12
  ampdeg4 = 7.5612937920090051e-02;
  amp4[0] = 1.8216457158166084e-04;
  amp4[1] = 5.9379925266976337e-04;
  amp4[2] = 1.9805510810841850e-03;
  amp4[3] = 6.7305259043889251e-03;
  amp4[4] = 2.2968035814462363e-02;
  amp4[5] = 7.8446158076590208e-02;
  amp4[6] = 2.6801161968909804e-01;
  amp4[7] = 9.1638294964514777e-01;
  amp4[8] = 3.1455001608230782e+00;
  amp4[9] = 1.1015300940935630e+01;
  amp4[10] = 4.2804007219649421e+01;
  amp4[11] = 2.9528433327784637e+02;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D12
  shift4[0] = 1.5040176129323931e-05;
  shift4[1] = 1.5748395080558076e-04;
  shift4[2] = 9.0824136753769424e-04;
  shift4[3] = 4.7741664713063219e-03;
  shift4[4] = 2.4663956324885342e-02;
  shift4[5] = 1.2699351312509560e-01;
  shift4[6] = 6.5351357742461591e-01;
  shift4[7] = 3.3640324149937921e+00;
  shift4[8] = 1.7354798935745059e+01;
  shift4[9] = 9.0565575140189637e+01;
  shift4[10] = 5.0212898660187273e+02;
  shift4[11] = 3.9849675183074896e+03;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D12
  ampdeg8 = 3.6186931031844773e+00;
  amp8[0] = -2.3930839139052775e-06;
  amp8[1] = -1.7181239140141815e-05;
  amp8[2] = -1.0981630153120690e-04;
  amp8[3] = -6.9437167972036544e-04;
  amp8[4] = -4.3832262963637986e-03;
  amp8[5] = -2.7661879237314023e-02;
  amp8[6] = -1.7460165737364908e-01;
  amp8[7] = -1.1034404071593327e+00;
  amp8[8] = -7.0181229003145109e+00;
  amp8[9] = -4.6131109343683470e+01;
  amp8[10] = -3.6022476726756418e+02;
  amp8[11] = -7.6207918210876232e+03;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D12
  shift8[0] = 2.6735960107323604e-05;
  shift8[1] = 2.2306727287285208e-04;
  shift8[2] = 1.2458325540584518e-03;
  shift8[3] = 6.5075515795739352e-03;
  shift8[4] = 3.3564360760126602e-02;
  shift8[5] = 1.7269705767541360e-01;
  shift8[6] = 8.8824779717055669e-01;
  shift8[7] = 4.5708480123957029e+00;
  shift8[8] = 2.3591600305750941e+01;
  shift8[9] = 1.2367293211540921e+02;
  shift8[10] = 7.0427529652865735e+02;
  shift8[11] = 6.7232191211233530e+03;
#endif
}
// -----------------------------------------------------------------




// -----------------------------------------------------------------
// (11, 11) approximation for spectral range [1e-5, 50]
// gives errors 1.064032e-05 and 5.735037e-06
void setup_rhmc11() {
#if (DEGREE==11)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D11
  ampdeg4 = 1.9748180236103505e-01;
  amp4[0] = 5.1088365802723218e-05;
  amp4[1] = 1.6003338487834137e-04;
  amp4[2] = 5.1036966915755293e-04;
  amp4[3] = 1.6597921340084090e-03;
  amp4[4] = 5.4234722425496587e-03;
  amp4[5] = 1.7742709041750043e-02;
  amp4[6] = 5.8113137000818688e-02;
  amp4[7] = 1.9124921824328966e-01;
  amp4[8] = 6.4404937803804974e-01;
  amp4[9] = 2.4284312000973571e+00;
  amp4[10] = 1.6558885067283203e+01;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D11
  shift4[0] = 2.7818179678949325e-06;
  shift4[1] = 2.8238764993579120e-05;
  shift4[2] = 1.5531382235812910e-04;
  shift4[3] = 7.7317635540915576e-04;
  shift4[4] = 3.7741083934698738e-03;
  shift4[5] = 1.8350836737594658e-02;
  shift4[6] = 8.9203180943308050e-02;
  shift4[7] = 4.3471535522870142e-01;
  shift4[8] = 2.1465885440424688e+00;
  shift4[9] = 1.1322523014309711e+01;
  shift4[10] = 8.6660800228024399e+01;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D11
  ampdeg8 = 2.2391954658813749e+00;
  amp8[0] = -3.5363622101017518e-07;
  amp8[1] = -2.4024443111274285e-06;
  amp8[2] = -1.4414646320691006e-05;
  amp8[3] = -8.5452752390562025e-05;
  amp8[4] = -5.0563198975080701e-04;
  amp8[5] = -2.9917201595653243e-03;
  amp8[6] = -1.7728072906135327e-02;
  amp8[7] = -1.0586065354081924e-01;
  amp8[8] = -6.5625958559320219e-01;
  amp8[9] = -4.8970608140017928e+00;
  amp8[10] = -1.0154172043999166e+02;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D11
  shift8[0] = 4.9243473302622236e-06;
  shift8[1] = 3.9671800968449227e-05;
  shift8[2] = 2.1090234404452169e-04;
  shift8[3] = 1.0426007462641042e-03;
  shift8[4] = 5.0800004851836514e-03;
  shift8[5] = 2.4682287075428813e-02;
  shift8[6] = 1.1994027687958879e-01;
  shift8[7] = 5.8487501074377135e-01;
  shift8[8] = 2.9029811669526673e+00;
  shift8[9] = 1.5754881262197461e+01;
  shift8[10] = 1.4560448531198813e+02;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (10, 10) approximation for spectral range [5e-4, 1000]
// gives errors 1.718292e-05 and 9.257843e-06
void setup_rhmc10() {
#if (DEGREE==10)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D10
  ampdeg4 = 9.5236040698401025e-02;
  amp4[0] = 1.0305116214687513e-03;
  amp4[1] = 3.3718283049997588e-03;
  amp4[2] = 1.1293907313293374e-02;
  amp4[3] = 3.8540256520752894e-02;
  amp4[4] = 1.3207968447962981e-01;
  amp4[5] = 4.5334819932450859e-01;
  amp4[6] = 1.5622562711791996e+00;
  amp4[7] = 5.4911794756331380e+00;
  amp4[8] = 2.1399718600200291e+01;
  amp4[9] = 1.4779575007005877e+02;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D10
  shift4[0] = 1.5149323791794220e-04;
  shift4[1] = 1.5909706611240905e-03;
  shift4[2] = 9.2168584704976960e-03;
  shift4[3] = 4.8698758452968574e-02;
  shift4[4] = 2.5295601995683098e-01;
  shift4[5] = 1.3101661690595596e+00;
  shift4[6] = 6.7963963422459379e+00;
  shift4[7] = 3.5653187401114494e+01;
  shift4[8] = 1.9861151960264147e+02;
  shift4[9] = 1.5816612805396308e+03;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D10
  ampdeg8 = 3.2244477566414624e+00;
  amp8[0] = -3.2208707338912046e-05;
  amp8[1] = -2.3243430945415344e-04;
  amp8[2] = -1.4943579180777895e-03;
  amp8[3] = -9.5057857586941571e-03;
  amp8[4] = -6.0381776270618456e-02;
  amp8[5] = -3.8390036988977677e-01;
  amp8[6] = -2.4560147977775588e+00;
  amp8[7] = -1.6231889764931818e+01;
  amp8[8] = -1.2729189072873393e+02;
  amp8[9] = -2.6980978083468826e+03;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D10
  shift8[0] = 2.6936957159554373e-04;
  shift8[1] = 2.2548188733747068e-03;
  shift8[2] = 1.2651142037133222e-02;
  shift8[3] = 6.6422206726939034e-02;
  shift8[4] = 3.4444127701857080e-01;
  shift8[5] = 1.7828719980804448e+00;
  shift8[6] = 9.2513825960872182e+00;
  shift8[7] = 4.8745127781844168e+01;
  shift8[8] = 2.7883366727955610e+02;
  shift8[9] = 2.6699190389084179e+03;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (9, 9) approximation for spectral range [1e-4, 45]
// gives errors 1.928152e-05 and 1.038366e-05
void setup_rhmc9() {
#if (DEGREE==9)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D9
  ampdeg4 = 2.0777859903387064e-01;
  amp4[0] = 3.1361646774095720e-04;
  amp4[1] = 1.0376047912755866e-03;
  amp4[2] = 3.5188116165401893e-03;
  amp4[3] = 1.2155937785551100e-02;
  amp4[4] = 4.2190013023882304e-02;
  amp4[5] = 1.4707389241596666e-01;
  amp4[6] = 5.2261160990536404e-01;
  amp4[7] = 2.0541440716938171e+00;
  amp4[8] = 1.4235435645059507e+01;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D9
  shift4[0] = 3.0945740855689258e-05;
  shift4[1] = 3.2784330944557943e-04;
  shift4[2] = 1.9246508827843313e-03;
  shift4[3] = 1.0324786841812992e-02;
  shift4[4] = 5.4499729309375029e-02;
  shift4[5] = 2.8737303500233369e-01;
  shift4[6] = 1.5309893112867550e+00;
  shift4[7] = 8.6482893683193165e+00;
  shift4[8] = 6.9576998834492443e+01;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D9
  ampdeg8 = 2.1830271620728054e+00;
  amp8[0] = -5.4143795366382000e-06;
  amp8[1] = -3.9676818015731586e-05;
  amp8[2] = -2.5958109726990279e-04;
  amp8[3] = -1.6811247632604292e-03;
  amp8[4] = -1.0882543862047362e-02;
  amp8[5] = -7.0847423319728930e-02;
  amp8[6] = -4.7591272677901392e-01;
  amp8[7] = -3.7801496263213803e+00;
  amp8[8] = -8.0587284363165352e+01;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D9
  shift8[0] = 5.5083850325016191e-05;
  shift8[1] = 4.6563686474799176e-04;
  shift8[2] = 2.6486486150264711e-03;
  shift8[3] = 1.4120708057479768e-02;
  shift8[4] = 7.4420558484424110e-02;
  shift8[5] = 3.9242609363745878e-01;
  shift8[6] = 2.0993041046459315e+00;
  shift8[7] = 1.2170425789307121e+01;
  shift8[8] = 1.1759944538524526e+02;
#endif
}
// -----------------------------------------------------------------




// -----------------------------------------------------------------
// (8, 8) approximation for spectral range [0.001, 50]
// gives errors 1.205192e-05 and 6.486560e-06
void setup_rhmc8() {
#if (DEGREE==8)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D8
  ampdeg4 = 1.9847855485120461e-01;
  amp4[0] = 1.6447767692749293e-03;
  amp4[1] = 5.2091545016137450e-03;
  amp4[2] = 1.6823654204678816e-02;
  amp4[3] = 5.5444365469241169e-02;
  amp4[4] = 1.8437888053401108e-01;
  amp4[5] = 6.2746826716341830e-01;
  amp4[6] = 2.3852840251249825e+00;
  amp4[7] = 1.6315143889652543e+01;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D8
  shift4[0] = 2.8432460169357867e-04;
  shift4[1] = 2.9108780584128227e-03;
  shift4[2] = 1.6221830544213445e-02;
  shift4[3] = 8.2026799734265451e-02;
  shift4[4] = 4.0801052401031673e-01;
  shift4[5] = 2.0476062496901357e+00;
  shift4[6] = 1.0951562209548896e+01;
  shift4[7] = 8.4659732253886020e+01;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D8
  ampdeg8 = 2.2336270511419518e+00;
  amp8[0] = -6.4667060419709420e-05;
  amp8[1] = -4.4599197309502802e-04;
  amp8[2] = -2.7234661408815967e-03;
  amp8[3] = -1.6461958362314753e-02;
  amp8[4] = -1.0004750758332101e-01;
  amp8[5] = -6.3021119918448276e-01;
  amp8[6] = -4.7606598099602264e+00;
  amp8[7] = -9.9243921490085825e+01;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D8
  shift8[0] = 5.0374382496533006e-04;
  shift8[1] = 4.0970063350602185e-03;
  shift8[2] = 2.2077737619020866e-02;
  shift8[3] = 1.1088619746225478e-01;
  shift8[4] = 5.5108791671543900e-01;
  shift8[5] = 2.7782277485822364e+00;
  shift8[6] = 1.5278036140176734e+01;
  shift8[7] = 1.4244275240229373e+02;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (7, 7) approximation for spectral range [0.01, 150]
// gives errors 1.781381e-05 and 9.580686e-06
void setup_rhmc7() {
#if (DEGREE==7)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D7
  ampdeg4 = 1.5326316573975857e-01;
  amp4[0] = 9.7994797921248308e-03;
  amp4[1] = 3.2179844694980766e-02;
  amp4[2] = 1.0829739662159377e-01;
  amp4[3] = 3.7267169688623547e-01;
  amp4[4] = 1.3130539823649245e+00;
  amp4[5] = 5.1297007503450658e+00;
  amp4[6] = 3.5464062062551541e+01;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D7
  shift4[0] = 3.0500176202031704e-03;
  shift4[1] = 3.2121017568922355e-02;
  shift4[2] = 1.8694642203595604e-01;
  shift4[3] = 9.9502625138175738e-01;
  shift4[4] = 5.2656370536547890e+00;
  shift4[5] = 2.9482543290399242e+01;
  shift4[6] = 2.3556426043523533e+02;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D7
  ampdeg8 = 2.5418686463319484e+00;
  amp8[0] = -9.4451046353977142e-04;
  amp8[1] = -6.8490012168947864e-03;
  amp8[2] = -4.4326125095649642e-02;
  amp8[3] = -2.8561230633721635e-01;
  amp8[4] = -1.8974336110743928e+00;
  amp8[5] = -1.4937228612606580e+01;
  amp8[6] = -3.1715417125536584e+02;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D7
  shift8[0] = 5.4233671586606967e-03;
  shift8[1] = 4.5535405241877540e-02;
  shift8[2] = 2.5670185006942098e-01;
  shift8[3] = 1.3587031887080201e+00;
  shift8[4] = 7.2120298513631562e+00;
  shift8[5] = 4.1441512816953264e+01;
  shift8[6] = 3.9792560434365043e+02;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (6, 6) approximation for spectral range [0.02, 50]
// gives errors 1.515132e-05 and 8.140949e-06
void setup_rhmc6() {
#if (DEGREE==6)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D6
  ampdeg4 = 2.0035838418319055e-01;
  amp4[0] = 1.6089619700034339e-02;
  amp4[1] = 5.2075939216247140e-02;
  amp4[2] = 1.7299810700423821e-01;
  amp4[3] = 5.9783724002907257e-01;
  amp4[4] = 2.3063654482894740e+00;
  amp4[5] = 1.5868596323671357e+01;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D6
  shift4[0] = 5.9246187607994976e-03;
  shift4[1] = 6.1679058754489605e-02;
  shift4[2] = 3.5332103905499312e-01;
  shift4[3] = 1.8640825764563929e+00;
  shift4[4] = 1.0275478485280116e+01;
  shift4[5] = 8.1016349994659194e+01;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D6
  ampdeg8 = 2.2231956780463324e+00;
  amp8[0] = -1.9829856353425174e-03;
  amp8[1] = -1.4094809881415832e-02;
  amp8[2] = -8.9639421822227741e-02;
  amp8[3] = -5.8322796414232880e-01;
  amp8[4] = -4.5123946696300674e+00;
  amp8[5] = -9.5059971756102911e+01;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D6
  shift8[0] = 1.0516496796568211e-02;
  shift8[1] = 8.7160697505863152e-02;
  shift8[2] = 4.8363725652222034e-01;
  shift8[3] = 2.5473481002404794e+00;
  shift8[4] = 1.4405517772037626e+01;
  shift8[5] = 1.3666238033906589e+02;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// (5, 5) approximation for spectral range [0.1, 50]
// gives errors 1.548364e-05 and 8.308677e-06
void setup_rhmc5() {
#if (DEGREE==5)
  // awk '/res_MD/{print("amp4["$2"] =",$3";")}' < out.D5
  ampdeg4 = 2.0057814828187764e-01;
  amp4[0] = 5.4026803430958975e-02;
  amp4[1] = 1.7590005470348138e-01;
  amp4[2] = 5.9772503229277774e-01;
  amp4[3] = 2.2997285767889570e+00;
  amp4[4] = 1.5819178342283395e+01;

  // awk '/pole_MD/{print("shift4["$2"] =",$3";")}' < out.D5
  shift4[0] = 2.9769772029903337e-02;
  shift4[1] = 3.1110339537434900e-01;
  shift4[2] = 1.8074132732436818e+00;
  shift4[3] = 1.0165968473383909e+01;
  shift4[4] = 8.0573715946619146e+01;

  // awk '/res_GR/{print("amp8["$2"] =",$3";")}' < out.D5
  ampdeg8 = 2.2220375827770185e+00;
  amp8[0] = -1.2204111391487278e-02;
  amp8[1] = -8.7538464213535880e-02;
  amp8[2] = -5.7743852008615837e-01;
  amp8[3] = -4.4849784135647406e+00;
  amp8[4] = -9.4603555440254667e+01;

  // awk '/pole_GR/{print("shift8["$2"] =",$3";")}' < out.D5
  shift8[0] = 5.2850306687580832e-02;
  shift8[1] = 4.4009623019926597e-01;
  shift8[2] = 2.4868497380830941e+00;
  shift8[3] = 1.4278758280275570e+01;
  shift8[4] = 1.3600523930215593e+02;
#endif
}
// -----------------------------------------------------------------



// -----------------------------------------------------------------
// Switch between different sets of coefficients
// for (Mdag M)^(-1 / 4) and (Mdag M)^(1 / 8),
// For given spectral range, set DEGREE in defines.h
// as the smallest value that keeps remez errors < 2e-5
void setup_rhmc() {
  Norder = DEGREE;
  node0_printf("RHMC Norder %d for spectral range ", Norder);

  switch(Norder) {
    case 5:
      node0_printf("[0.1, 50]\n");
      setup_rhmc5();
      break;
    case 6:
      node0_printf("[0.02, 50]\n");
      setup_rhmc6();
      break;
    case 7:
      node0_printf("[0.01, 150]\n");
      setup_rhmc7();
      break;
    case 8:
      node0_printf("[0.001, 50]\n");
      setup_rhmc8();
      break;
    case 9:
      node0_printf("[1e-4, 45]\n");
      setup_rhmc9();
      break;
    case 10:
      node0_printf("[5e-4, 1000]\n");
      setup_rhmc10();
      break;
    case 11:
      node0_printf("[1e-5, 50]\n");
      setup_rhmc11();
      break;
    case 12:
      node0_printf("[5e-5, 2500]\n");
      setup_rhmc12();
      break;
    case 14:
      node0_printf("[1e-6, 1900]\n");
      setup_rhmc14();
      break;
    case 15:
      node0_printf("[1e-7, 1000]\n");
      setup_rhmc15();
      break;
    case 16:
      node0_printf("[1e-8, 500]\n");
      setup_rhmc16();
      break;
    default:
      node0_printf("setup_rhmc: unrecognized degree\n");
      terminate(1);
  }

  // Test by zeroing out all amp4 and amp8, optionally setting Norder to 1
//  int i;
//  Norder = 1;
//  for (i = 0; i < Norder; i++) {
//    amp4[i] = 0;
//    amp8[i] = 0;
//  }
//  node0_printf("TEST VERSION: internal Norder %d\n", Norder);
//  ampdeg4 = 0;
//  amp4[0] = 1;
//  shift4[0] = 1e-3;
//  ampdeg8 = 1;
//  amp8[0] = 0;
//  shift8[0] = 1;

#ifdef DEBUG_CHECK
  int i;
  node0_printf("RHMC ampdeg4 %e\n", ampdeg4);
  for (i = 0; i < Norder; i++)
    node0_printf("RHMC params %d amp4 %e shift4 %e\n", i, amp4[i], shift4[i]);

  node0_printf("RHMC ampdeg8 %e\n", ampdeg8);
  for (i = 0; i < Norder; i++)
    node0_printf("RHMC params %d amp8 %e shift8 %e\n", i, amp8[i], shift8[i]);
#endif
}
// -----------------------------------------------------------------
