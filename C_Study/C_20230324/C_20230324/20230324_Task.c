#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char name[10];
	char student_id[15];
	char phone_num[15];

	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("�й� �Է� : ");
	scanf("%s", student_id);
	printf("��ȭ��ȣ �Է� : ");
	scanf("%s", phone_num);

	printf("�̸� : %s\n�й� : %s\n��ȭ��ȣ : %s\n", name, student_id, phone_num);

	return 0;
}