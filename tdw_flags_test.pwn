#include <a_samp>
#include "tdw_flags\tdw_flags"

DECLARE_FLAGS<point_state1>(E_P1NONE,E_P1IN_POINT,OUT_OF_POINT);
DECLARE_FLAGS<point_state2>(E_P2NONE,E_P2IN_POINT);
DECLARE_FLAGS<point_state3>(NONE,NONE1,NONE2,NONE3,NONE4,NONE5,NONE6,NONE7,NONE8,NONE9,NONE10,NONE11,NONE12,NONE13,NONE14,NONE15,NONE16,NONE17,NONE18,NONE19,NONE20,NONE21,NONE22,NONE23,NONE24,NONE25,NONE26,NONE27,NONE28,NONE29,NONE30);
DECLARE_FLAGS<point_stateN>();

#include "tdw_flags\tdw_flags"

#if !IS_VALID_ENUM_FLAG(point_state1)
	#error not valid
#endif


main()
{
	new point_statea:abc;
	printf("%d", GET_NUM_ITEMS(point_state1));
	printf("%d", GET_NUM_ITEMS(point_state2));
	printf("%d", GET_NUM_ITEMS(point_state3));
}