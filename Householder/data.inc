PI_L1 float input[N_CHANNELS][EV_WINDOWS_SIZE] =  /* A */
{
  {0.276922984960890,	0.694828622975817,	0.438744359656398,	0.186872604554379,	0.709364830858073,	0.655098003973841,	0.959743958516081,	0.751267059305653,	0.890903252535799,	0.149294005559057,	0.814284826068816,	0.196595250431208,	0.351659507062997,	0.917193663829810,	0.380445846975357,	0.530797553008973,	0.568823660872193,	0.162182308193243,	0.165648729499781,	0.689214503140008,	0.228976968716819,	0.538342435260057,	0.106652770180584,	0.817303220653433,	0.259870402850654,	0.181847028302853,	0.869292207640089,	0.853031117721894,	0.401808033751942,	0.183907788282417,	0.902716109915281,	0.337719409821377,	0.780252068321138,	0.0964545251683886,	0.575208595078466,	0.821194040197959,	0.649115474956452,	0.547008892286345,	0.686775433365315,	0.780227435151377,	0.486791632403172,	0.508508655381127,	0.644318130193692,	0.350727103576883,	0.622475086001228,	0.470923348517591,	0.225921780972399,	0.311102286650413,	0.904880968679893,	0.258064695912067,	0.602843089382083,	0.296675873218327,	0.0855157970900440,	0.928854139478045,	0.237283579771521,	0.521135830804002,	0.679135540865748,	0.0377388662395521,	0.0987122786555743,	0.136553137355370,	0.494173936639270,	0.890922504330789,	0.0305409463046367,	0.904722238067363,	0.805489424529686,	0.886511933076101,	0.978680649641159,	0.0596188675796392,	0.521649842464284,	0.722439592366842,	0.972974554763863,	0.432391503783462,	0.173388613119006,	0.0604711791698936,	0.656859890973707,	0.0154871256360190,	0.372409740055537,	0.951630464777727,	0.269119426398556,	0.417744104316662,	0.666338851584426,	0.178132454400338,	0.0326008205305280,	0.190433267179954,	0.156404952226563,	0.190923695236303,	0.589507484695059,	0.251806122472313,	0.824376266688835,	0.584069333278452,	0.817760559370642,	0.425259320214135,	0.422885689100085,	0.695949313301608,	0.0688060991180512,	0.407619197041153,	0.531333906565675,	0.778802241824093,	0.153656717591307,	0.457424365687674},
  {0.0461713906311539,	0.317099480060861,	0.381558457093008,	0.489764395788231,	0.754686681982361,	0.162611735194631,	0.340385726666133,	0.255095115459269,	0.959291425205444,	0.257508254123736,	0.243524968724989,	0.251083857976031,	0.830828627896291,	0.285839018820374,	0.567821640725221,	0.779167230102011,	0.469390641058206,	0.794284540683907,	0.601981941401637,	0.748151592823710,	0.913337361501670,	0.996134716626886,	0.961898080855054,	0.868694705363510,	0.800068480224308,	0.263802916521990,	0.579704587365570,	0.622055131485066,	0.0759666916908419,	0.239952525664903,	0.944787189721646,	0.900053846417662,	0.389738836961253,	0.131973292606335,	0.0597795429471558,	0.0154034376515551,	0.731722385658670,	0.296320805607773,	0.183511155737270,	0.0811257688657853,	0.435858588580919,	0.510771564172110,	0.378609382660268,	0.939001561999887,	0.587044704531417,	0.230488160211559,	0.170708047147859,	0.923379642103244,	0.979748378356085,	0.408719846112552,	0.711215780433683,	0.318778301925882,	0.262482234698333,	0.730330862855453,	0.458848828179931,	0.231594386708524,	0.395515215668593,	0.885168008202475,	0.261871183870716,	0.721227498581740,	0.779051723231275,	0.334163052737496,	0.744074260367462,	0.609866648422558,	0.576721515614685,	0.0286741524641061,	0.712694471678914,	0.681971904149063,	0.0967300257808670,	0.149865442477967,	0.648991492712356,	0.825313795402046,	0.390937802323736,	0.399257770613576,	0.627973359190104,	0.984063724379154,	0.198118402542975,	0.920332039836564,	0.422835615008808,	0.983052466469856,	0.539126465042857,	0.128014399720173,	0.561199792709660,	0.368916546063895,	0.855522805845911,	0.428252992979386,	0.226187679752676,	0.290440664276979,	0.982663399721950,	0.107769015243743,	0.260727999055465,	0.312718886820616,	0.0942293388877347,	0.699887849928292,	0.319599735180496,	0.819981222781941,	0.325145681820560,	0.423452918962738,	0.281005302533871,	0.875371598604185},
  {0.0971317812358475,	0.950222048838355,	0.765516788149002,	0.445586200710900,	0.276025076998578,	0.118997681558377,	0.585267750979777,	0.505957051665142,	0.547215529963803,	0.840717255983663,	0.929263623187228,	0.616044676146639,	0.585264091152724,	0.757200229110721,	0.0758542895630636,	0.934010684229183,	0.0119020695012414,	0.311215042044805,	0.262971284540144,	0.450541598502498,	0.152378018969223,	0.0781755287531837,	0.00463422413406744,	0.0844358455109103,	0.431413827463545,	0.145538980384717,	0.549860201836332,	0.350952380892271,	0.239916153553658,	0.417267069084370,	0.490864092468080,	0.369246781120215,	0.241691285913833,	0.942050590775485,	0.234779913372406,	0.0430238016578078,	0.647745963136307,	0.744692807074156,	0.368484596490337,	0.929385970968730,	0.446783749429806,	0.817627708322262,	0.811580458282477,	0.875942811492984,	0.207742292733028,	0.844308792695389,	0.227664297816554,	0.430207391329584,	0.438869973126103,	0.594896074008614,	0.221746734017240,	0.424166759713807,	0.801014622769739,	0.488608973803579,	0.963088539286913,	0.488897743920167,	0.367436648544477,	0.913286827639239,	0.335356839962797,	0.106761861607241,	0.715037078400694,	0.698745832334795,	0.500022435590201,	0.617666389588455,	0.182922469414914,	0.489901388512224,	0.500471624154843,	0.0424311375007417,	0.818148553859625,	0.659605252908307,	0.800330575352402,	0.0834698148589140,	0.831379742839070,	0.526875830508296,	0.291984079961715,	0.167168409914656,	0.489687638016024,	0.0526769976807926,	0.547870901214845,	0.301454948712065,	0.698105520180308,	0.999080394761361,	0.881866500451810,	0.460725937260412,	0.644764536870088,	0.482022061031856,	0.384619124369411,	0.617090884393223,	0.730248792267598,	0.906308150649733,	0.594356250664331,	0.161484744311750,	0.598523668756741,	0.638530758271838,	0.530864280694127,	0.718358943205884,	0.105629203329022,	0.0908232857874395,	0.440085139001721,	0.518052108361104},
  {0.823457828327293,	0.0344460805029088,	0.795199901137063,	0.646313010111265,	0.679702676853675,	0.498364051982143,	0.223811939491137,	0.699076722656686,	0.138624442828679,	0.254282178971531,	0.349983765984809,	0.473288848902729,	0.549723608291140,	0.753729094278495,	0.0539501186666072,	0.129906208473730,	0.337122644398882,	0.528533135506213,	0.654079098476782,	0.0838213779969326,	0.825816977489547,	0.442678269775446,	0.774910464711502,	0.399782649098897,	0.910647594429523,	0.136068558708664,	0.144954798223727,	0.513249539867053,	0.123318934835166,	0.0496544303257421,	0.489252638400019,	0.111202755293787,	0.403912145588115,	0.956134540229802,	0.353158571222071,	0.168990029462704,	0.450923706430945,	0.188955015032545,	0.625618560729690,	0.775712678608402,	0.306349472016557,	0.794831416883453,	0.532825588799455,	0.550156342898422,	0.301246330279491,	0.194764289567049,	0.435698684103899,	0.184816320124136,	0.111119223440599,	0.262211747780845,	0.117417650855806,	0.507858284661118,	0.0292202775621463,	0.578525061023439,	0.546805718738968,	0.624060088173690,	0.987982003161633,	0.796183873585212,	0.679727951377338,	0.653757348668560,	0.903720560556316,	0.197809826685929,	0.479922141146060,	0.859442305646212,	0.239932010568717,	0.167927145682257,	0.471088374541939,	0.0714454646006424,	0.817547092079286,	0.518594942510538,	0.453797708726920,	0.133171007607162,	0.803364391602440,	0.416799467930787,	0.431651170248720,	0.106216344928664,	0.339493413390758,	0.737858095516997,	0.942736984276934,	0.701098755900926,	0.666527913402587,	0.171121066356432,	0.669175304534394,	0.981637950970750,	0.376272210278832,	0.120611613297162,	0.582986382747674,	0.265280909810029,	0.343877004114983,	0.879653724481905,	0.0225125927402318,	0.178766186752368,	0.470924256358334,	0.0336038360664295,	0.654445707757066,	0.968649330231094,	0.610958658746201,	0.266471490779072,	0.527142741760652,	0.943622624548388}
};