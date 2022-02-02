//app.c

#include "std.h"

void app_init()
{
	logo();
}


void app_run()
{
	char select;
	while (1)
	{
		system("cls");
		con_printall();
		menuprint();
		select = _getch();	//문자 전용 입력 함수
		switch (select)
		{
		case '1':  con_insert();		 break;
		case '2':  con_selectname();	 break;
		case '3':  con_selectgender();	 break;
		case '4':  con_update();		 break;
		case '5':  con_delete();		 break;
		case '6':  return;	//함수를 종료시키는 키워드!!!!!
		}
		system("pause");
	}
}


void app_exit()
{
	ending();
}

void logo()
{
	system("cls");
	printf("*************************************************\n");
	printf(" C언어 과정\n");
	printf(" 관리프로그램\n");
	printf(" 2018.9.18\n");
	printf(" \n");
	printf("*************************************************\n");
	system("pause");
}

void ending()
{
	system("cls");
	printf("*************************************************\n");
	printf(" 프로그램을 종료합니다.\n");
	printf("*************************************************\n");
	system("pause");
}

void menuprint()
{
	printf("*************************************************\n");
	printf("[1] 저장(insert)\n");
	printf("[2] 검색(select): 이름 - uniq\n");
	printf("[3] 검색(select): 성별 - not uniq\n");
	printf("[4] 수정(update): 이름 검색, 전화번호, 나이 변경\n");
	printf("[5] 삭제(delete): 이름 검색\n");
	printf("[6] 프로그램 종료\n");
	printf("*************************************************\n");
}