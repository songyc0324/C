// �迭�� ������_�迭���� ��ü_�迭���� �ּ����� Ȯ��

#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	printf("�迭�� ��ü�� �� : %p\n", ary);
	printf("ù ��° �迭 ����� �ּ� : %p\n", &ary[0]);
	printf("�迭���� ����Ű�� ����� �� : %d\n", *ary);
	printf("ù ��° �迭 ����� �� : %d\n", ary[0]);
}