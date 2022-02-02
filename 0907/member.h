//member.h

void member_print(int idx, const char *name, char gender, const char *phone, char age);

int member_insert(int idx, char *name, char *gender, char *phone, int *age,
	char *input_name, char input_gender, char *input_phone, char input_age);

int member_select(char (*g_name)[20], char *name);

void member_print1(int idx, const char *name, char gender, const char *phone, char age);