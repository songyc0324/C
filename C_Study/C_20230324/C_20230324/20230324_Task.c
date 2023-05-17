#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char name[10];
	char student_id[15];
	char phone_num[15];

	printf("이름 입력 : ");
	scanf("%s", name);
	printf("학번 입력 : ");
	scanf("%s", student_id);
	printf("전화번호 입력 : ");
	scanf("%s", phone_num);

	printf("이름 : %s\n학번 : %s\n전화번호 : %s\n", name, student_id, phone_num);

	return 0;
}