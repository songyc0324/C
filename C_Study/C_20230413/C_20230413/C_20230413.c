#include <stdio.h>
#include <string.h>

int main(void)
{
	/*
	int score[5];
	int i, cnt, tot = 0;
	double avg;

	cnt = sizeof(score) / sizeof(score[0]);		// sizeof(score) = 20, sizeof(score[0]) = 4, answer = 5

	for (i = 0; i < cnt; i++)					// cnt = 5
	{
		printf("%d��° ���� ���� �Է� : ", i + 1);
		scanf("%d", &score[i]);					// 0���� 4���� �ټ� �� �ݺ�, score �迭�� �� �濡 ���� �Է�
	}
	for (i = 0; i < cnt; i++)					// cnt = 5
	{
		tot += score[i];						// 0���� 4���� �ټ� �� �ݺ�, tot�� score �迭 �� ���� ���� ������
	}
	avg = tot / (double)cnt;					// tot�� �Ǽ��� cnt(5.00...)���� ���� ����� avg�� ����

	for (i = 0; i < cnt; i++)					// cnt = 5
	{
		printf("%5d", score[i]);				// 0���� 4���� �ټ� �� �ݺ�, score �迭 �� �濡 �ִ� ���� ���
	}
	printf("\n");

	printf("��� : %.3lf\n", avg);
	*/

	/*
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("�� ���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Էµ� �� ���ڿ� : %s\n", str);
	*/

	/*
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n", str);
	*/

	/*
	char str1[80] = "cat";
	char str2[80];
										// strcpy(a, b) -> a�� ����� ���� �迭��, b�� ������ ���ڿ�(�迭�� ����)
	strcpy(str1, "tiger");				// str1 �迭�� tiger ����
	strcpy(str2, str1);					// str2 �迭�� str1 �迭�� ���ڿ� ����
	printf("%s, %s\n", str1, str2);		// strcpy�� ������ ���� ���� ������ �����ϴ� �������� ����
	*/


	char str[80];				// str �迭 ����

	printf("���ڿ� �Է� : ");
	gets(str);					// ��ĭ�� ������ ���ڿ� �Է�
	puts("�Էµ� ���ڿ� : ");	// ���ڿ� ��� ���
	puts(str);					// �迭�� ����� ���ڿ� ���





	return 0;
}