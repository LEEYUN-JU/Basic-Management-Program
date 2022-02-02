//memeber.c

#include "std.h"

void member_print(int idx, const char *name, char gender, const char *phone, char age)
{
	if (name[0] != '\0' )
		printf("[%2d] %10s %c %15s %3d\n", idx, name, gender, phone, age);
	else 
		printf("[%2d]\n", idx);
}

int member_insert(int idx, char *name, char *gender, char *phone, int *age,
	char *input_name, char input_gender, char *input_phone, char input_age)
{
	if (idx < 0 || idx >= DATA_MAX)
		return 0;

	//정상코드
	strcpy_s(name, sizeof(char) * 20, input_name);
	*gender = input_gender;
	strcpy_s(phone, sizeof(char) * 20, input_phone);
	*age = input_age;

	return 1;
}

int member_select(char(*g_name)[20], char *name)
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		if (strcmp(g_name[i], name) == 0)
		{
			return i;
		}
			
	}
	return -1;
}

void member_print1(int idx, const char *name, char gender, const char *phone, char age)
{
	printf("저장 인덱스 : %2d\n", idx);
	printf("----------------------------------\n");
	printf("이	  름 : %10s\n", name);
	printf("성	  별 : %c\n", gender);
	printf("전화번호 : %15s\n", phone);
	printf("나	  이 : %3d\n", age);
}