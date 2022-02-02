//control.c

#include "std.h"

#define DATA_MAX	10

//========================= 전역변수 =======================
//저장시점 : 프로그램 시작시 전역정적공간에 저장됨.
//			 main함수 호출 전
//해제시점 : 프로그램 종료시 메모리에서 사라진다.
//			 main함수 종료 후
char g_name[DATA_MAX][20];	//10개의 공간에 저장
char g_gender[DATA_MAX];
char g_phone[DATA_MAX][20];
int g_age[DATA_MAX];
//==========================================================

//전체 순회 출력
void con_printall()
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		member_print(i, g_name[i], g_gender[i], g_phone[i], g_age[i]);
	}
}

void con_insert()
{
	//1.필요한 변수 선언
	int idx;
	char name[20];
	char gender;
	char phone[20];
	int age;

	//2.사용자 입력
	printf(">> 저장위치(0~%d) : ", DATA_MAX - 1);
	scanf_s("%d", &idx);

	getchar();

	printf(">> 이름 : ");
	gets_s(name, sizeof(name));

	printf(">> 성별(m or f) : ");
	scanf_s("%c", &gender,sizeof(char));

	printf(">> 전화번호 : ");
	scanf_s("%s",&phone, sizeof(phone));

	printf(">> 나이 : ");
	scanf_s("%d", &age);

	getchar();

	//3.전역배열에 저장
	if (member_insert(idx, g_name[idx], &g_gender[idx], g_phone[idx], g_age + idx,
		name, gender, phone, age) == 1)
	{
		printf(">> 저장 성공\n");
	}
	else 
	{
		printf(">> 저장 실패\n");
	}


	//4.결과출력

}

void con_selectname() //사용자에게 입력을 받아 그걸 검색함
{
	//1. 변수선언
	char name[20];

	//2. 초기화(사용자 입력)
	printf(">> 검색명 : ");
	gets_s(name, sizeof(name));

	//3. 연산
	int idx = member_select(g_name, name);
	if (idx == -1)
	{
		printf("없다\n");
		return;
	}
		
	//4. 결과출력
	member_print1(idx, g_name[idx], g_gender[idx], g_phone[idx], g_age[idx]);
}

void con_selectgender()
{

}

void con_update()
{

}

void con_delete()
{

}