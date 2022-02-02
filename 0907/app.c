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
		select = _getch();	//���� ���� �Է� �Լ�
		switch (select)
		{
		case '1':  con_insert();		 break;
		case '2':  con_selectname();	 break;
		case '3':  con_selectgender();	 break;
		case '4':  con_update();		 break;
		case '5':  con_delete();		 break;
		case '6':  return;	//�Լ��� �����Ű�� Ű����!!!!!
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
	printf(" C��� ����\n");
	printf(" �������α׷�\n");
	printf(" 2018.9.18\n");
	printf(" \n");
	printf("*************************************************\n");
	system("pause");
}

void ending()
{
	system("cls");
	printf("*************************************************\n");
	printf(" ���α׷��� �����մϴ�.\n");
	printf("*************************************************\n");
	system("pause");
}

void menuprint()
{
	printf("*************************************************\n");
	printf("[1] ����(insert)\n");
	printf("[2] �˻�(select): �̸� - uniq\n");
	printf("[3] �˻�(select): ���� - not uniq\n");
	printf("[4] ����(update): �̸� �˻�, ��ȭ��ȣ, ���� ����\n");
	printf("[5] ����(delete): �̸� �˻�\n");
	printf("[6] ���α׷� ����\n");
	printf("*************************************************\n");
}