//control.c

#include "std.h"

#define DATA_MAX	10

//========================= �������� =======================
//������� : ���α׷� ���۽� �������������� �����.
//			 main�Լ� ȣ�� ��
//�������� : ���α׷� ����� �޸𸮿��� �������.
//			 main�Լ� ���� ��
char g_name[DATA_MAX][20];	//10���� ������ ����
char g_gender[DATA_MAX];
char g_phone[DATA_MAX][20];
int g_age[DATA_MAX];
//==========================================================

//��ü ��ȸ ���
void con_printall()
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		member_print(i, g_name[i], g_gender[i], g_phone[i], g_age[i]);
	}
}

void con_insert()
{
	//1.�ʿ��� ���� ����
	int idx;
	char name[20];
	char gender;
	char phone[20];
	int age;

	//2.����� �Է�
	printf(">> ������ġ(0~%d) : ", DATA_MAX - 1);
	scanf_s("%d", &idx);

	getchar();

	printf(">> �̸� : ");
	gets_s(name, sizeof(name));

	printf(">> ����(m or f) : ");
	scanf_s("%c", &gender,sizeof(char));

	printf(">> ��ȭ��ȣ : ");
	scanf_s("%s",&phone, sizeof(phone));

	printf(">> ���� : ");
	scanf_s("%d", &age);

	getchar();

	//3.�����迭�� ����
	if (member_insert(idx, g_name[idx], &g_gender[idx], g_phone[idx], g_age + idx,
		name, gender, phone, age) == 1)
	{
		printf(">> ���� ����\n");
	}
	else 
	{
		printf(">> ���� ����\n");
	}


	//4.������

}

void con_selectname() //����ڿ��� �Է��� �޾� �װ� �˻���
{
	//1. ��������
	char name[20];

	//2. �ʱ�ȭ(����� �Է�)
	printf(">> �˻��� : ");
	gets_s(name, sizeof(name));

	//3. ����
	int idx = member_select(g_name, name);
	if (idx == -1)
	{
		printf("����\n");
		return;
	}
		
	//4. ������
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