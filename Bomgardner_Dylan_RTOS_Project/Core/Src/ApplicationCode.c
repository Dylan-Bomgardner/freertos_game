/*
 * ApplicationCode.c
 *
 *  Created on: Nov 14, 2023
 *      Author: dylan
 */

#include "ApplicationCode.h"

//sin struct.
float sin_grav[] = {
		-1.0, -0.9998476951563913, -0.9993908270190958, -0.9986295347545738, -0.9975640502598242, -0.9961946980917455, -0.9945218953682733, -0.992546151641322, -0.9902680687415704, -0.9876883405951378, -0.984807753012208, -0.981627183447664, -0.9781476007338056, -0.9743700647852352, -0.9702957262759965, -0.9659258262890683, -0.9612616959383189, -0.9563047559630354, -0.9510565162951535, -0.9455185755993167, -0.9396926207859083, -0.9335804264972017, -0.9271838545667874, -0.9205048534524404, -0.9135454576426009, -0.9063077870366499, -0.898794046299167, -0.8910065241883678, -0.8829475928589269, -0.8746197071393957, -0.8660254037844386, -0.8571673007021123, -0.848048096156426, -0.838670567945424, -0.8290375725550417, -0.8191520442889918, -0.8090169943749475, -0.7986355100472928, -0.788010753606722, -0.7771459614569709, -0.766044443118978, -0.754709580222772, -0.7431448254773942, -0.7313537016191705, -0.7193398003386511, -0.7071067811865475, -0.6946583704589973, -0.6819983600624985, -0.6691306063588582, -0.6560590289905073, -0.6427876096865393, -0.6293203910498374, -0.6156614753256583, -0.6018150231520483, -0.5877852522924731, -0.573576436351046, -0.5591929034707469, -0.5446390350150271, -0.5299192642332049, -0.5150380749100542, -0.49999999999999994, -0.48480962024633706, -0.4694715627858908, -0.45399049973954675, -0.4383711467890774, -0.42261826174069944, -0.4067366430758002, -0.39073112848927377, -0.374606593415912, -0.35836794954530027, -0.3420201433256687, -0.3255681544571567, -0.3090169943749474, -0.29237170472273677, -0.27563735581699916, -0.25881904510252074, -0.24192189559966773, -0.224951054343865, -0.20791169081775934, -0.1908089953765448, -0.17364817766693033, -0.15643446504023087, -0.13917310096006544, -0.12186934340514748, -0.10452846326765347, -0.08715574274765817, -0.0697564737441253, -0.052335956242943835, -0.03489949670250097, -0.01745240643728351, 0.0, 0.01745240643728351, 0.03489949670250097, 0.052335956242943835, 0.0697564737441253, 0.08715574274765817, 0.10452846326765347, 0.12186934340514748, 0.13917310096006544, 0.15643446504023087, 0.17364817766693033, 0.1908089953765448, 0.20791169081775934, 0.224951054343865, 0.24192189559966773, 0.25881904510252074, 0.27563735581699916, 0.29237170472273677, 0.3090169943749474, 0.3255681544571567, 0.3420201433256687, 0.35836794954530027, 0.374606593415912, 0.39073112848927377, 0.4067366430758002, 0.42261826174069944, 0.4383711467890774, 0.45399049973954675, 0.4694715627858908, 0.48480962024633706, 0.49999999999999994, 0.5150380749100542, 0.5299192642332049, 0.5446390350150271, 0.5591929034707469, 0.573576436351046, 0.5877852522924731, 0.6018150231520483, 0.6156614753256583, 0.6293203910498374, 0.6427876096865393, 0.6560590289905073, 0.6691306063588582, 0.6819983600624985, 0.6946583704589973, 0.7071067811865475, 0.7193398003386511, 0.7313537016191705, 0.7431448254773942, 0.754709580222772, 0.766044443118978, 0.7771459614569709, 0.788010753606722, 0.7986355100472928, 0.8090169943749475, 0.8191520442889918, 0.8290375725550417, 0.838670567945424, 0.848048096156426, 0.8571673007021123, 0.8660254037844386, 0.8746197071393957, 0.8829475928589269, 0.8910065241883678, 0.898794046299167, 0.9063077870366499, 0.9135454576426009, 0.9205048534524404, 0.9271838545667874, 0.9335804264972017, 0.9396926207859083, 0.9455185755993167, 0.9510565162951535, 0.9563047559630354, 0.9612616959383189, 0.9659258262890683, 0.9702957262759965, 0.9743700647852352, 0.9781476007338056, 0.981627183447664, 0.984807753012208, 0.9876883405951378, 0.9902680687415704, 0.992546151641322, 0.9945218953682733, 0.9961946980917455, 0.9975640502598242, 0.9986295347545738, 0.9993908270190958, 0.9998476951563913, 1.0
};

static const float sin_ball[] = {
		0.0, 0.01745240643728351, 0.03489949670250097, 0.052335956242943835, 0.0697564737441253, 0.08715574274765817, 0.10452846326765347, 0.12186934340514748, 0.13917310096006544, 0.15643446504023087, 0.17364817766693033, 0.1908089953765448, 0.20791169081775934, 0.224951054343865, 0.24192189559966773, 0.25881904510252074, 0.27563735581699916, 0.29237170472273677, 0.3090169943749474, 0.3255681544571567, 0.3420201433256687, 0.35836794954530027, 0.374606593415912, 0.39073112848927377, 0.4067366430758002, 0.42261826174069944, 0.4383711467890774, 0.45399049973954675, 0.4694715627858908, 0.48480962024633706, 0.49999999999999994, 0.5150380749100542, 0.5299192642332049, 0.5446390350150271, 0.5591929034707469, 0.573576436351046, 0.5877852522924731, 0.6018150231520483, 0.6156614753256583, 0.6293203910498374, 0.6427876096865393, 0.6560590289905073, 0.6691306063588582, 0.6819983600624985, 0.6946583704589973, 0.7071067811865475, 0.7193398003386511, 0.7313537016191705, 0.7431448254773942, 0.754709580222772, 0.766044443118978, 0.7771459614569709, 0.788010753606722, 0.7986355100472928, 0.8090169943749475, 0.8191520442889918, 0.8290375725550417, 0.838670567945424, 0.848048096156426, 0.8571673007021123, 0.8660254037844386, 0.8746197071393957, 0.8829475928589269, 0.8910065241883678, 0.898794046299167, 0.9063077870366499, 0.9135454576426009, 0.9205048534524404, 0.9271838545667874, 0.9335804264972017, 0.9396926207859083, 0.9455185755993167, 0.9510565162951535, 0.9563047559630354, 0.9612616959383189, 0.9659258262890683, 0.9702957262759965, 0.9743700647852352, 0.9781476007338056, 0.981627183447664, 0.984807753012208, 0.9876883405951378, 0.9902680687415704, 0.992546151641322, 0.9945218953682733, 0.9961946980917455, 0.9975640502598242, 0.9986295347545738, 0.9993908270190958, 0.9998476951563913, 1.0, 0.9998476951563913, 0.9993908270190958, 0.9986295347545738, 0.9975640502598242, 0.9961946980917455, 0.9945218953682733, 0.9925461516413221, 0.9902680687415704, 0.9876883405951378, 0.984807753012208, 0.981627183447664, 0.9781476007338057, 0.9743700647852352, 0.9702957262759965, 0.9659258262890683, 0.9612616959383189, 0.9563047559630355, 0.9510565162951536, 0.9455185755993168, 0.9396926207859084, 0.9335804264972017, 0.9271838545667874, 0.9205048534524403, 0.9135454576426009, 0.90630778703665, 0.8987940462991669, 0.8910065241883679, 0.8829475928589269, 0.8746197071393959, 0.8660254037844387, 0.8571673007021123, 0.8480480961564261, 0.8386705679454239, 0.8290375725550417, 0.8191520442889917, 0.8090169943749475, 0.7986355100472927, 0.788010753606722, 0.777145961456971, 0.766044443118978, 0.7547095802227721, 0.7431448254773942, 0.7313537016191706, 0.7193398003386511, 0.7071067811865476, 0.6946583704589971, 0.6819983600624986, 0.6691306063588583, 0.6560590289905073, 0.6427876096865395, 0.6293203910498374, 0.6156614753256584, 0.6018150231520482, 0.5877852522924732, 0.5735764363510459, 0.5591929034707469, 0.5446390350150273, 0.5299192642332049, 0.5150380749100544, 0.49999999999999994, 0.48480962024633717, 0.4694715627858907, 0.45399049973954686, 0.4383711467890773, 0.4226182617406995, 0.40673664307580043, 0.39073112848927377, 0.37460659341591224, 0.3583679495453002, 0.3420201433256689, 0.3255681544571566, 0.3090169943749475, 0.2923717047227366, 0.2756373558169992, 0.258819045102521, 0.24192189559966773, 0.2249510543438652, 0.20791169081775931, 0.19080899537654497, 0.17364817766693028, 0.15643446504023098, 0.13917310096006533, 0.12186934340514755, 0.10452846326765373, 0.0871557427476582, 0.06975647374412552, 0.05233595624294381, 0.03489949670250114, 0.01745240643728344, 1.2246467991473532e-16, -0.017452406437283637, -0.0348994967025009, -0.052335956242943564, -0.06975647374412527, -0.08715574274765794, -0.1045284632676535, -0.12186934340514731, -0.13917310096006552, -0.15643446504023073, -0.17364817766693047, -0.19080899537654472, -0.2079116908177595, -0.22495105434386498, -0.2419218955996675, -0.2588190451025208, -0.275637355816999, -0.29237170472273677, -0.3090169943749473, -0.32556815445715676, -0.34202014332566866, -0.35836794954530043, -0.374606593415912, -0.39073112848927355, -0.4067366430758002, -0.4226182617406993, -0.43837114678907746, -0.4539904997395467, -0.46947156278589086, -0.48480962024633695, -0.5000000000000001, -0.5150380749100542, -0.5299192642332048, -0.5446390350150271, -0.5591929034707467, -0.5735764363510462, -0.587785252292473, -0.6018150231520484, -0.6156614753256582, -0.6293203910498376, -0.6427876096865393, -0.656059028990507, -0.6691306063588582, -0.6819983600624984, -0.6946583704589974, -0.7071067811865475, -0.7193398003386512, -0.7313537016191705, -0.7431448254773944, -0.754709580222772, -0.7660444431189779, -0.7771459614569706, -0.7880107536067221, -0.7986355100472928, -0.8090169943749473, -0.8191520442889916, -0.8290375725550418, -0.838670567945424, -0.848048096156426, -0.8571673007021121, -0.8660254037844384, -0.874619707139396, -0.882947592858927, -0.8910065241883678, -0.8987940462991668, -0.90630778703665, -0.913545457642601, -0.9205048534524403, -0.9271838545667873, -0.9335804264972016, -0.9396926207859084, -0.9455185755993168, -0.9510565162951535, -0.9563047559630353, -0.961261695938319, -0.9659258262890683, -0.9702957262759965, -0.9743700647852351, -0.9781476007338056, -0.981627183447664, -0.984807753012208, -0.9876883405951377, -0.9902680687415703, -0.9925461516413221, -0.9945218953682734, -0.9961946980917455, -0.9975640502598242, -0.9986295347545738, -0.9993908270190958, -0.9998476951563913, -1.0, -0.9998476951563913, -0.9993908270190958, -0.9986295347545738, -0.9975640502598243, -0.9961946980917455, -0.9945218953682734, -0.992546151641322, -0.9902680687415704, -0.9876883405951378, -0.9848077530122081, -0.9816271834476639, -0.9781476007338056, -0.9743700647852352, -0.9702957262759966, -0.9659258262890684, -0.9612616959383188, -0.9563047559630354, -0.9510565162951536, -0.945518575599317, -0.9396926207859083, -0.9335804264972017, -0.9271838545667874, -0.9205048534524405, -0.9135454576426011, -0.9063077870366499, -0.898794046299167, -0.891006524188368, -0.8829475928589271, -0.8746197071393956, -0.8660254037844386, -0.8571673007021123, -0.8480480961564262, -0.8386705679454243, -0.8290375725550416, -0.8191520442889918, -0.8090169943749476, -0.798635510047293, -0.7880107536067218, -0.7771459614569708, -0.7660444431189781, -0.7547095802227722, -0.7431448254773946, -0.7313537016191703, -0.7193398003386512, -0.7071067811865477, -0.6946583704589976, -0.6819983600624983, -0.6691306063588581, -0.6560590289905074, -0.6427876096865396, -0.6293203910498378, -0.6156614753256582, -0.6018150231520483, -0.5877852522924734, -0.5735764363510465, -0.5591929034707466, -0.544639035015027, -0.529919264233205, -0.5150380749100545, -0.5000000000000004, -0.4848096202463369, -0.4694715627858908, -0.45399049973954697, -0.4383711467890778, -0.4226182617406992, -0.40673664307580015, -0.3907311284892739, -0.37460659341591235, -0.35836794954530077, -0.3420201433256686, -0.3255681544571567, -0.3090169943749476, -0.29237170472273716, -0.27563735581699894, -0.2588190451025207, -0.24192189559966787, -0.22495105434386534, -0.20791169081775987, -0.19080899537654467, -0.1736481776669304, -0.15643446504023112, -0.13917310096006588, -0.12186934340514723, -0.10452846326765342, -0.08715574274765832, -0.06975647374412564, -0.05233595624294437, -0.034899496702500823, -0.01745240643728356
};

static const float cos_ball[] = {
		1.0, 0.9998476951563913, 0.9993908270190958, 0.9986295347545738, 0.9975640502598242, 0.9961946980917455, 0.9945218953682733, 0.992546151641322, 0.9902680687415704, 0.9876883405951378, 0.984807753012208, 0.981627183447664, 0.9781476007338057, 0.9743700647852352, 0.9702957262759965, 0.9659258262890683, 0.9612616959383189, 0.9563047559630354, 0.9510565162951535, 0.9455185755993168, 0.9396926207859084, 0.9335804264972017, 0.9271838545667874, 0.9205048534524404, 0.9135454576426009, 0.9063077870366499, 0.898794046299167, 0.8910065241883679, 0.882947592858927, 0.8746197071393957, 0.8660254037844387, 0.8571673007021123, 0.848048096156426, 0.838670567945424, 0.8290375725550416, 0.8191520442889918, 0.8090169943749475, 0.7986355100472928, 0.7880107536067219, 0.7771459614569709, 0.766044443118978, 0.754709580222772, 0.7431448254773942, 0.7313537016191705, 0.7193398003386512, 0.7071067811865476, 0.6946583704589973, 0.6819983600624985, 0.6691306063588582, 0.6560590289905073, 0.6427876096865394, 0.6293203910498375, 0.6156614753256583, 0.6018150231520484, 0.5877852522924731, 0.5735764363510462, 0.5591929034707468, 0.5446390350150271, 0.5299192642332049, 0.5150380749100542, 0.5000000000000001, 0.4848096202463371, 0.46947156278589086, 0.4539904997395468, 0.43837114678907746, 0.42261826174069944, 0.4067366430758002, 0.3907311284892737, 0.37460659341591196, 0.3583679495453004, 0.3420201433256688, 0.32556815445715676, 0.30901699437494745, 0.29237170472273677, 0.27563735581699916, 0.25881904510252074, 0.24192189559966767, 0.22495105434386492, 0.20791169081775945, 0.19080899537654492, 0.17364817766693041, 0.15643446504023092, 0.13917310096006547, 0.12186934340514749, 0.10452846326765346, 0.08715574274765814, 0.06975647374412523, 0.052335956242943966, 0.03489949670250108, 0.0174524064372836, 6.123233995736766e-17, -0.017452406437283477, -0.034899496702500955, -0.05233595624294384, -0.06975647374412533, -0.08715574274765824, -0.10452846326765355, -0.12186934340514737, -0.13917310096006535, -0.1564344650402308, -0.1736481776669303, -0.1908089953765448, -0.20791169081775934, -0.22495105434386503, -0.24192189559966779, -0.25881904510252085, -0.27563735581699905, -0.29237170472273666, -0.30901699437494734, -0.32556815445715664, -0.3420201433256687, -0.35836794954530027, -0.37460659341591207, -0.39073112848927377, -0.40673664307580026, -0.42261826174069933, -0.4383711467890775, -0.4539904997395467, -0.4694715627858909, -0.484809620246337, -0.4999999999999998, -0.5150380749100543, -0.5299192642332048, -0.5446390350150271, -0.5591929034707467, -0.5735764363510462, -0.587785252292473, -0.6018150231520484, -0.6156614753256583, -0.6293203910498373, -0.6427876096865394, -0.6560590289905072, -0.6691306063588582, -0.6819983600624984, -0.6946583704589974, -0.7071067811865475, -0.7193398003386512, -0.7313537016191705, -0.743144825477394, -0.754709580222772, -0.7660444431189779, -0.7771459614569709, -0.7880107536067219, -0.7986355100472929, -0.8090169943749473, -0.8191520442889919, -0.8290375725550416, -0.8386705679454239, -0.848048096156426, -0.8571673007021122, -0.8660254037844387, -0.8746197071393957, -0.882947592858927, -0.8910065241883678, -0.898794046299167, -0.9063077870366499, -0.9135454576426008, -0.9205048534524404, -0.9271838545667873, -0.9335804264972017, -0.9396926207859083, -0.9455185755993168, -0.9510565162951535, -0.9563047559630355, -0.9612616959383189, -0.9659258262890682, -0.9702957262759965, -0.9743700647852351, -0.9781476007338057, -0.981627183447664, -0.984807753012208, -0.9876883405951377, -0.9902680687415704, -0.992546151641322, -0.9945218953682733, -0.9961946980917455, -0.9975640502598242, -0.9986295347545738, -0.9993908270190958, -0.9998476951563913, -1.0, -0.9998476951563913, -0.9993908270190958, -0.9986295347545738, -0.9975640502598242, -0.9961946980917455, -0.9945218953682733, -0.9925461516413221, -0.9902680687415703, -0.9876883405951378, -0.984807753012208, -0.981627183447664, -0.9781476007338056, -0.9743700647852352, -0.9702957262759965, -0.9659258262890683, -0.9612616959383189, -0.9563047559630354, -0.9510565162951536, -0.9455185755993167, -0.9396926207859084, -0.9335804264972017, -0.9271838545667874, -0.9205048534524404, -0.9135454576426009, -0.90630778703665, -0.8987940462991669, -0.8910065241883679, -0.8829475928589269, -0.8746197071393959, -0.8660254037844386, -0.8571673007021123, -0.8480480961564261, -0.838670567945424, -0.8290375725550418, -0.8191520442889918, -0.8090169943749476, -0.7986355100472928, -0.788010753606722, -0.7771459614569708, -0.766044443118978, -0.7547095802227721, -0.7431448254773942, -0.7313537016191706, -0.7193398003386511, -0.7071067811865477, -0.6946583704589973, -0.6819983600624986, -0.6691306063588581, -0.6560590289905073, -0.6427876096865395, -0.6293203910498378, -0.6156614753256581, -0.6018150231520483, -0.5877852522924732, -0.5735764363510464, -0.5591929034707466, -0.544639035015027, -0.529919264233205, -0.5150380749100545, -0.5000000000000004, -0.48480962024633684, -0.46947156278589075, -0.4539904997395469, -0.43837114678907774, -0.42261826174069916, -0.4067366430758001, -0.3907311284892738, -0.3746065934159123, -0.3583679495453007, -0.34202014332566855, -0.32556815445715664, -0.30901699437494756, -0.2923717047227371, -0.2756373558169989, -0.25881904510252063, -0.24192189559966779, -0.22495105434386525, -0.2079116908177598, -0.1908089953765446, -0.17364817766693033, -0.15643446504023104, -0.13917310096006583, -0.12186934340514717, -0.10452846326765336, -0.08715574274765825, -0.06975647374412558, -0.052335956242944306, -0.03489949670250076, -0.017452406437283498, -1.8369701987210297e-16, 0.01745240643728313, 0.03489949670250128, 0.052335956242943946, 0.06975647374412522, 0.08715574274765789, 0.10452846326765299, 0.12186934340514768, 0.13917310096006547, 0.15643446504023067, 0.17364817766692997, 0.1908089953765451, 0.20791169081775943, 0.22495105434386492, 0.24192189559966745, 0.2588190451025203, 0.2756373558169994, 0.2923717047227367, 0.30901699437494723, 0.3255681544571563, 0.342020143325669, 0.3583679495453004, 0.37460659341591196, 0.3907311284892735, 0.40673664307579976, 0.4226182617406996, 0.4383711467890774, 0.45399049973954664, 0.4694715627858904, 0.4848096202463373, 0.5000000000000001, 0.5150380749100542, 0.5299192642332047, 0.5446390350150266, 0.559192903470747, 0.573576436351046, 0.5877852522924729, 0.6018150231520479, 0.6156614753256585, 0.6293203910498375, 0.6427876096865393, 0.656059028990507, 0.6691306063588578, 0.6819983600624986, 0.6946583704589973, 0.7071067811865474, 0.7193398003386509, 0.7313537016191707, 0.7431448254773942, 0.7547095802227719, 0.7660444431189778, 0.7771459614569706, 0.788010753606722, 0.7986355100472928, 0.8090169943749473, 0.8191520442889916, 0.8290375725550418, 0.838670567945424, 0.848048096156426, 0.8571673007021121, 0.8660254037844384, 0.8746197071393959, 0.8829475928589269, 0.8910065241883678, 0.8987940462991668, 0.90630778703665, 0.913545457642601, 0.9205048534524403, 0.9271838545667873, 0.9335804264972015, 0.9396926207859084, 0.9455185755993168, 0.9510565162951535, 0.9563047559630353, 0.9612616959383189, 0.9659258262890683, 0.9702957262759965, 0.9743700647852351, 0.9781476007338056, 0.981627183447664, 0.984807753012208, 0.9876883405951377, 0.9902680687415703, 0.9925461516413221, 0.9945218953682733, 0.9961946980917455, 0.9975640502598242, 0.9986295347545738, 0.9993908270190958, 0.9998476951563913
};
//Tasks

static StaticTask_t lcd_led_static_task;
	uint32_t lcd_led_stack_size[500];
	static osThreadId_t lcd_led_task_id;
	const osPriority_t lcd_led_task_priority = osPriorityNormal ;
	const osThreadAttr_t lcd_led_task_attributes = {
			"lcd_led",
			0,
			&lcd_led_static_task,
			sizeof(lcd_led_static_task),
			lcd_led_stack_size,
			sizeof(lcd_led_stack_size),
			lcd_led_task_priority,
	};

static StaticTask_t timer_static_task;
	uint32_t timer_stack_size[500];
	static osThreadId_t timer_task_id;
	const osPriority_t timer_task_priority = osPriorityNormal ;
	const osThreadAttr_t timer_task_attributes = {
			"timer",
			0,
			&timer_static_task,
			sizeof(timer_static_task),
			timer_stack_size,
			sizeof(timer_stack_size),
			timer_task_priority,
	};

static StaticTask_t monitor_static_task;
	uint32_t monitor_stack_size[100];
	static osThreadId_t monitor_task_id;
	const osPriority_t monitor_task_priority = osPriorityNormal ;
	const osThreadAttr_t monitor_task_attributes = {
			"monitor",
			0,
			&monitor_static_task,
			sizeof(monitor_static_task),
			monitor_stack_size,
			sizeof(monitor_stack_size),
			monitor_task_priority,
	};

static StaticTask_t monitor2_static_task;
	uint32_t monitor2_stack_size[100];
	static osThreadId_t monitor2_task_id;
	const osPriority_t monitor2_task_priority = osPriorityNormal ;
	const osThreadAttr_t monitor2_task_attributes = {
			"monitor2",
			0,
			&monitor2_static_task,
			sizeof(monitor2_static_task),
			monitor2_stack_size,
			sizeof(monitor2_stack_size),
			monitor2_task_priority,
	};


//static StaticTask_t movement_static_task;
//	uint32_t movement_stack_size[20];
//	static osThreadId_t movement_task_id;
//	const osPriority_t movement_task_priority = osPriorityNormal ;
//	const osThreadAttr_t movement_task_attributes = {
//			"movement",
//			0,
//			&movement_static_task,
//			sizeof(movement_static_task),
//			movement_stack_size,
//			sizeof(movement_stack_size),
//			movement_task_priority,
//	};

static StaticTask_t physics_static_task;
	uint32_t physics_stack_size[500];
	static osThreadId_t physics_task_id;
	const osPriority_t physics_task_priority = osPriorityRealtime7;
	const osThreadAttr_t physics_task_attributes = {
			"physics",
			0,
			&physics_static_task,
			sizeof(physics_static_task),
			physics_stack_size,
			sizeof(physics_stack_size),
			physics_task_priority,
	};

static StaticTask_t disruptor_static_task;
	uint32_t disruptor_stack_size[500];
	static osThreadId_t disruptor_task_id;
	const osPriority_t disruptor_task_priority = osPriorityNormal;
	const osThreadAttr_t disruptor_task_attributes = {
			"disruptor",
			0,
			&disruptor_static_task,
			sizeof(disruptor_static_task),
			disruptor_stack_size,
			sizeof(disruptor_stack_size),
			disruptor_task_priority,
	};

static StaticTask_t disruptor_timer_static_task;
	uint32_t disruptor_timer_stack_size[100];
	static osThreadId_t disruptor_timer_task_id;
	const osPriority_t disruptor_timer_task_priority = osPriorityNormal;
	const osThreadAttr_t disruptor_timer_task_attributes = {
			"disruptor_timer",
			0,
			&disruptor_timer_static_task,
			sizeof(disruptor_timer_static_task),
			disruptor_timer_stack_size,
			sizeof(disruptor_timer_stack_size),
			disruptor_timer_task_priority,
	};

//memory pool define

//timers
static osTimerId_t gyro_timer;
//static osTimerId_t disruptor_timer;
//Mutexes

static osMutexId_t gyro_mut;
static osMutexId_t game_time_mut;
//static osMutexId_t direction_mut;
//static osMutexId_t disruptor_mut;
//static osMutexId_t ballpos_mut;
//static osMutexId_t energy_mut;

//event flag
static osEventFlagsId_t disruptor_flag;
static osEventFlagsId_t gyro_flag;
//Global Variables
int16_t gyro_y = 0;
int16_t gyro_x = 0;

int16_t angle_x = 0;
int16_t angle_y = 0;

float acceleration_x = 0;
float acceleration_y = 0;
float velocity_x = 0;
float velocity_y = 0;
float position_x = LOCATION1_X;
float position_y = LOCATION1_y;

//game timer
static uint16_t game_time = TIME_TO_COMPLETE;
extern TIM_HandleTypeDef htim11;

//test wall
/*********************************
 * GLOBAL VARIABLES
 *********************************/
int num_walls;
wall_t wall_list[200];
waypoint_t waypoint_list[NUM_WAYPOINTS];
uint8_t waypoint_tracker = 1;
hole_t hole_list[50];
int hole_tracker = 0;
int wall_tracker;
uint8_t disruptor = 0;
uint32_t current_energy = 15000;
uint8_t pressed = 0;
uint8_t score = 0;
#if (WAYPOINT_REUSE)
	uint8_t waypoint_reached = 0;
	uint16_t prev_time = TIME_TO_COMPLETE;
#endif
void ApplicationInit(void)
{
	LTCD__Init();
    LTCD_Layer_Init(0);
    Gyro_Init();


    map_init();

}

void itc_init(void) {
//	osStatus_t status;
	physics_task_id = osThreadNew(physics_callback, NULL, &physics_task_attributes);
	if(physics_task_id == NULL) {
		while(1);
	}

	lcd_led_task_id = osThreadNew(lcd_led_callback, NULL, &lcd_led_task_attributes);
	if(lcd_led_task_id == NULL) {
		while(1);
	}

	timer_task_id = osThreadNew(game_time_callback, NULL, &timer_task_attributes);
	if(timer_task_id == NULL) {
		while(1);
	}

	disruptor_task_id = osThreadNew(disruptor_callback, NULL, &disruptor_task_attributes);
	if(disruptor_task_id == NULL) {
		while(1);
	}

	disruptor_timer_task_id = osThreadNew(disruptor_timer_callback, NULL, &disruptor_timer_task_attributes);
		if(disruptor_timer_task_id == NULL) {
			while(1);
		}

	monitor_task_id = osThreadNew(monitor_callback, NULL, &monitor_task_attributes);
	if(monitor_task_id == NULL) {
		while(1);
	}

	monitor2_task_id = osThreadNew(monitor2_callback, NULL, &monitor2_task_attributes);
	if(monitor2_task_id == NULL) {
		while(1);
	}
	//timers
	gyro_timer = osTimerNew(gyro_callback, osTimerPeriodic, NULL, NULL);
	if(gyro_timer == NULL) while(1);


	//uint8_t gyro_timer_time = ();
	osTimerStart(gyro_timer, 1000 / UPDATE_FREQUENCY);

//	disruptor_timer = osTimerNew(disruptor_timer_callback, osTimerPeriodic, NULL, NULL);
//	if(disruptor_timer == NULL) while(1);
//	status = osTimerStart(game_timer, 1000);
//	if (status != osOK) {
//		while(1);
//	      // Timer could not be started
//	}

	//itcs
	gyro_flag = osEventFlagsNew(NULL);
	if(gyro_flag == NULL) while(1);

	gyro_mut = osMutexNew(NULL);
	if(gyro_mut == NULL) while(1);

	game_time_mut = osMutexNew(NULL);
	if(game_time_mut == NULL) while(1);

	disruptor_flag = osEventFlagsNew(NULL);
	if(disruptor_flag == NULL) while(1);

}

void game_init(void) {

}

void map_init(void) {
//MAZE GENERATION
	//make the background light brown
	//LCD_Clear(0,LCD_COLOR_BACKGROUND);
//arm the map with data and the starting coordinate
	maze_generation();
}

void gyro_callback(void* argument) {
	osMutexAcquire(gyro_mut, osWaitForever);
	gyro_x = Gyro_Get_Velocity_X();
	gyro_y = Gyro_Get_Velocity_Y();
	osMutexRelease(gyro_mut);
	osEventFlagsSet(gyro_flag, 1);

}

void physics_callback(void* argument) {
	int16_t local_gyro_x;
	int16_t local_gyro_y;
	uint8_t ball_dimensions[2][360];
	float update_freq = 1.0 / UPDATE_FREQUENCY;

	while(1) {
		osEventFlagsWait(gyro_flag, 1, osFlagsWaitAny, osWaitForever);
		//osDelay(1);
		osMutexAcquire(gyro_mut, osWaitForever);
		local_gyro_x = gyro_x;
		local_gyro_y = gyro_y;
		osMutexRelease(gyro_mut);

			//was 300
		if(gyro_x < 1000 && gyro_x > -1000) local_gyro_x = 0;
		if(gyro_y < 1000 && gyro_y > -1000) local_gyro_y = 0;
#if (BALL_FALL)
		if(angle_x > 90 || angle_x < -90 || angle_y > 90 || angle_y < -90) lose_game();
#endif
		angle_x += (local_gyro_x * update_freq) / 40 * ANGLE_GAIN / 1000;
		angle_y += (local_gyro_y * update_freq) / 40 * ANGLE_GAIN / 1000;// * ANGLE_GAIN / 1000;// * ANGLE_GAIN / 1000;

		acceleration_x =  sin_grav[((angle_x > 90) ? 90 : (angle_x < -90) ? -90 : angle_x) + 90] * (float) GRAVITY / 100.0;
		acceleration_y =  sin_grav[((angle_y > 90) ? 90 : (angle_y < -90) ? -90 : angle_y) + 90] * (float) GRAVITY / 100.0;
		velocity_x += acceleration_x * update_freq;
		velocity_y += acceleration_y * update_freq;

		if(!disruptor) {
			for(int i = 0; i < wall_tracker; i++) {
						//if horizontal wall.
				for(int j = 0; j < 360; j++) {
					if ((wall_list[i].start_coord[0] == wall_list[i].end_coord[0] && ball_dimensions[0][j] == wall_list[i].start_coord[0] &&
								 ((ball_dimensions[1][j] >= wall_list[i].start_coord[1] && ball_dimensions[1][j] <= wall_list[i].end_coord[1]) ||
								  (ball_dimensions[1][j] >= wall_list[i].end_coord[1] && ball_dimensions[1][j] <= wall_list[i].start_coord[1]))) ||
								(wall_list[i].start_coord[1] == wall_list[i].end_coord[1] && ball_dimensions[1][j] == wall_list[i].start_coord[1] &&
								 ((ball_dimensions[0][j] >= wall_list[i].start_coord[0] && ball_dimensions[0][j] <= wall_list[i].end_coord[0]) ||
								  (ball_dimensions[0][j] >= wall_list[i].end_coord[0] && ball_dimensions[0][j] <= wall_list[i].start_coord[0])))) {

							// if horizontal line
						if(wall_list[i].start_coord[0] == wall_list[i].end_coord[0]) {
							velocity_y = -velocity_y * (0.5);
							if(position_x < wall_list[i].start_coord[0]) position_x -= .1;
							else position_x += .1;
						}
						//if vertical line
						if(wall_list[i].start_coord[1] == wall_list[i].end_coord[1]) {
							velocity_x = -velocity_x * (0.5);
							if(position_y < wall_list[i].start_coord[1]) position_y -= .1;
							else position_y += .1;
						}
					}
				}
			}
			if(in_hole()) lose_game();
		}
		position_x += velocity_y * update_freq;
		position_y += velocity_x * update_freq;
#if (HARD_EDGED)
		if(position_x >= (239 - (DRONE_DIAMETER / 2 + 1))) {
			velocity_y = 0;
			position_x = 239 - (DRONE_DIAMETER / 2 + 1);
		}
		if(position_x <= 0 + (DRONE_DIAMETER / 2 + 1)) {
			velocity_y = 0;
			position_x = 0 + (DRONE_DIAMETER / 2 + 1);
		}
		if(position_y >= (319 - (DRONE_DIAMETER / 2 + 1))) {
			velocity_x = 0;
			position_y = 319 - (DRONE_DIAMETER / 2 + 1);
		}
		if(position_y <= 0 + (DRONE_DIAMETER / 2 + 1)) {
			velocity_x = 0;
			position_y = 0 + (DRONE_DIAMETER / 2 + 1);
		}
#else
		if(position_x >= (239 - (DRONE_DIAMETER / 2 + 1))) {
					lose_game();
				}
				if(position_x <= 0 + (DRONE_DIAMETER / 2 + 1)) {
					lose_game();
				}
				if(position_y >= (319 - (DRONE_DIAMETER / 2 + 1))) {
					lose_game();
				}
				if(position_y <= 0 + (DRONE_DIAMETER / 2 + 1)) {
					lose_game();
			}
#endif
		//update the ball dimensions
		for(int i = 0; i < 360; i++) {
			ball_dimensions[0][i] = (uint8_t) (position_x + sin_ball[i] * (float) DRONE_DIAMETER / 2.0);
			ball_dimensions[1][i] = (uint8_t) (position_y + cos_ball[i] * (float) DRONE_DIAMETER / 2.0);
			//LCD_Draw_Pixel(ball_dimensions[0][i], ball_dimensions[1][i], LCD_COLOR_RED);
		}

		if(in_waypoint()) {
			waypoint_tracker++;
#if (WAYPOINT_REUSE)
			osMutexAcquire(game_time_mut, osWaitForever);
			game_time = TIME_TO_COMPLETE;
			osMutexRelease(game_time_mut);
#endif
		}
#if (!WAYPOINT_REUSE)
		if(waypoint_tracker == NUM_WAYPOINTS) win_game();
#else
		for(int i = 0; i < NUM_WAYPOINTS; i++) {
			if(!waypoint_list[i].complete) break;
			if(i == NUM_WAYPOINTS - 1) win_game();
		}
#endif

	}
}



void game_time_callback(void* argument) {
	while(1) {
		osMutexAcquire(game_time_mut, osWaitForever);
		game_time -= 1;
		osMutexRelease(game_time_mut);

		if(game_time <= 0) lose_game();
		osDelay(1000);
	}
}

void lcd_led_callback(void* argument) {

	while(1) {
		LCD_Clear(0,LCD_COLOR_BACKGROUND);

		for(int i = 0; i < wall_tracker; i++) {
			if(wall_list[i].start_coord[0] == wall_list[i].end_coord[0]) {
				LCD_Draw_Horizontal_Line(wall_list[i].start_coord[0], wall_list[i].start_coord[1], wall_list[i].end_coord[1] - wall_list[i].start_coord[1], LCD_COLOR_BLACK);
			}
			else if (wall_list[i].start_coord[1] == wall_list[i].end_coord[1]){
				LCD_Draw_Vertical_Line(wall_list[i].start_coord[0], wall_list[i].start_coord[1], wall_list[i].end_coord[0] - wall_list[i].start_coord[0], LCD_COLOR_BLACK);

			}
		}
		for(int i = 0; i < hole_tracker; i++) {
			LCD_Draw_Circle_Fill((uint16_t)hole_list[i].x, (uint16_t)hole_list[i].y, CELL_SIZE / 2, LCD_COLOR_MAGENTA);
		}
#if (!WAYPOINT_REUSE)
		for(int i = 0; i < NUM_WAYPOINTS; i++) {
			if(waypoint_tracker > i) {
				LCD_Draw_Circle_Fill((uint16_t)waypoint_list[i].x, (uint16_t)waypoint_list[i].y, CELL_SIZE / 2, LCD_COLOR_GREEN);
			}
			else if(waypoint_tracker == i) {
				LCD_Draw_Circle_Fill((uint16_t)waypoint_list[i].x, (uint16_t)waypoint_list[i].y, CELL_SIZE / 2, LCD_COLOR_BLUE);
			}
			else {
				LCD_Draw_Circle_Fill((uint16_t)waypoint_list[i].x, (uint16_t)waypoint_list[i].y, CELL_SIZE / 2, LCD_COLOR_RED);
			}
		}

#else
		for(int i = 0; i < NUM_WAYPOINTS; i++) {
			if(waypoint_list[i].complete) {
				LCD_Draw_Circle_Fill((uint16_t)waypoint_list[i].x, (uint16_t)waypoint_list[i].y, CELL_SIZE / 2, LCD_COLOR_GREEN);
			}
			else {
				LCD_Draw_Circle_Fill((uint16_t)waypoint_list[i].x, (uint16_t)waypoint_list[i].y, CELL_SIZE / 2, LCD_COLOR_RED);
			}
		}
#endif

		LCD_Draw_Circle_Fill((uint16_t)position_x, (uint16_t)position_y, DRONE_DIAMETER / 2, LCD_COLOR_BLUE);

		draw_tilt_indication();
		//draw the game time at the bottom.
		LCD_SetTextColor(LCD_COLOR_BLACK);
		LCD_SetFont(&Font16x24);
		LCD_DisplayString(1,295,"Time: ");
		LCD_DisplayNumber(76, 295, game_time);
		osDelay(1);
	}
}

void disruptor_callback(void* argument) {
	while(1) {
		if(disruptor) {
			if(current_energy >= 0) current_energy -= DRAIN_RATE / 10;
			osEventFlagsSet(disruptor_flag, 1);
		}
		else {
			if (current_energy <= MAX_ENERGY) current_energy += RECHARGE_RATE / 10;
		}

//		osTimerStart(disruptor_timer, 1000);

		osDelay(100);
	}
}

void disruptor_timer_callback(void* argument) {
	while(1) {
		osEventFlagsWait(disruptor_flag, 1, osFlagsWaitAny, osWaitForever);
		if(disruptor) osDelay(1000);
		else osDelay(50);

		if(disruptor) {
			disruptor = 0;
			pressed = 1;
		}
	}
}

void monitor_callback(void* argument) {
	while(1) {

		//HAL_GPIO_TogglePin(GREENLED_PORT, GREENLED_PIN);
		float period =  1000 * ((float)current_energy - (float)MIN_ACTIVATION_ENERGY) / (float)RECHARGE_RATE;

				if(current_energy < MIN_ACTIVATION_ENERGY) {
					HAL_GPIO_WritePin(GREENLED_PORT, GREENLED_PIN, 0);

					period = 500;
				}
				//HAL_GPIO_TogglePin(GREENLED_PORT, GREENLED_PIN);
				else {
					HAL_GPIO_TogglePin(GREENLED_PORT, GREENLED_PIN);

				}

				osDelay((int)period / 10);
	}
}

void monitor2_callback(void* argument) {
	while(1) {

		float period =  1000 * ((float)MIN_ACTIVATION_ENERGY - (float)current_energy) / (float)RECHARGE_RATE;

		if(current_energy > MIN_ACTIVATION_ENERGY) {
			HAL_GPIO_WritePin(REDLED_PORT, REDLED_PIN, 0);

			period = 500;
		}
		//HAL_GPIO_TogglePin(GREENLED_PORT, GREENLED_PIN);
		else {
			HAL_GPIO_TogglePin(REDLED_PORT, REDLED_PIN);

		}

		osDelay((int)period / 10);
	}
}

void lose_game() {
#if (WAYPOINT_REUSE)
	if(waypoint_reached) {
		uint8_t waypoints_reached = 0;
		for(int i = 0; i < NUM_WAYPOINTS; i++) {
			if(waypoint_list[i].complete) waypoints_reached++;
		}
		score = score / (waypoints_reached - 1);
		osThreadTerminate(lcd_led_task_id);
		LCD_Clear(0,LCD_COLOR_BACKGROUND);
		LCD_SetTextColor(LCD_COLOR_BLACK);
		LCD_SetFont(&Font16x24);
		LCD_DisplayString(40,120,"You Win :)");
		LCD_DisplayString(40, 140, "Score: ");
		LCD_DisplayString(20, 20, "(REUSE)");
		LCD_DisplayNumber(130, 140, score);
		while(1);
	}
#endif
	osThreadTerminate(lcd_led_task_id);
	LCD_Clear(0,LCD_COLOR_BACKGROUND);
	LCD_SetTextColor(LCD_COLOR_BLACK);
	LCD_SetFont(&Font16x24);
	LCD_DisplayString(40,120,"You Lose :(");
	while(1);
}

void win_game() {
#if (WAYPOINT_REUSE)
	score = score / (NUM_WAYPOINTS - 1);
#else
	score = TIME_TO_COMPLETE - game_time;
#endif
	osThreadTerminate(lcd_led_task_id);
	LCD_Clear(0,LCD_COLOR_BACKGROUND);
	LCD_SetTextColor(LCD_COLOR_BLACK);
	LCD_SetFont(&Font16x24);
	LCD_DisplayString(40,120,"You Win :)");
#if (WAYPOINT_REUSE)
	LCD_DisplayString(40, 140, "Score: ");
	LCD_DisplayString(20, 20, "(REUSE)");
	LCD_DisplayNumber(130, 140, score);
#else
	LCD_DisplayString(40, 140, "Score: ");
	LCD_DisplayNumber(130, 140, score);
#endif
	while(1);
}

uint8_t in_waypoint() {
#if (!WAYPOINT_REUSE)
	int16_t distance_x = (int)position_x - waypoint_list[waypoint_tracker].x;
	int16_t distance_y = (int)position_y - waypoint_list[waypoint_tracker].y;
	int16_t distance_squared = distance_x * distance_x + distance_y * distance_y;
	if(distance_squared < (CELL_SIZE / 2)*(CELL_SIZE / 2)) return 1;
	return 0;
#else
	for(int i = 0; i < NUM_WAYPOINTS; i++) {
		if(waypoint_list[i].complete) continue;
		int16_t distance_x = (int)position_x - waypoint_list[i].x;
		int16_t distance_y = (int)position_y - waypoint_list[i].y;
		int16_t distance_squared = distance_x * distance_x + distance_y * distance_y;

		if(distance_squared < (CELL_SIZE / 2)*(CELL_SIZE / 2)) {
			score += prev_time - game_time;
			prev_time = game_time;
			waypoint_list[i].complete = 1;
			waypoint_reached = 1;
		}
	}
	return 0;
#endif

}

uint8_t in_hole() {
	int16_t distance_x;
	int16_t distance_y;
	uint32_t distance_squared;
	for(int i = 0; i < hole_tracker; i++) {
		distance_x = (int)position_x - hole_list[i].x;
		distance_y = (int)position_y - hole_list[i].y;
		distance_squared = distance_x * distance_x + distance_y * distance_y;
		if(distance_squared < (CELL_SIZE / 2)*(CELL_SIZE / 2)) return 1;
	}
	return 0;
}

void draw_tilt_indication() {
	if(angle_x < 0) {
		LCD_Draw_Vertical_Line(215, 295, 20, LCD_COLOR_CYAN);
	}
	else if(angle_x > 0) {
		LCD_Draw_Vertical_Line(215, 315, 20, LCD_COLOR_CYAN);
	}

	if(angle_y < 0) {
		LCD_Draw_Horizontal_Line(215, 295, 20, LCD_COLOR_CYAN);
	}
	else if(angle_y > 0) {
		LCD_Draw_Horizontal_Line(235, 295, 20, LCD_COLOR_CYAN);
	}
//	if(angle_y < 0)
//	else if(angle_y > 0)
}

void EXTI0_IRQHandler(void) {
	//Clear the gpio flag
	__HAL_GPIO_EXTI_CLEAR_FLAG(GPIO_PIN_0);
	//clear the interrupt flag
	HAL_NVIC_ClearPendingIRQ(EXTI0_IRQn);
	//Wake up the button task.
	if(!pressed) {
		if(disruptor || current_energy < MIN_ACTIVATION_ENERGY) disruptor = 0;
		else disruptor = 1;

	}
	else {
		pressed = 0;
	}
//	osEventFlagsSet(btn_event_flag, 1);
}



