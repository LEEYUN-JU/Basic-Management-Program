//start.c
/*
디버깅
F9		: break point
F5		: 디버그 시작
F10		: 다음단계 진행(함수는 건넘)
F11		: 다음단계 진행(다음함수로 이동)
*/
#include "std.h"

void main()
{
	app_init();
	app_run();
	app_exit();
}