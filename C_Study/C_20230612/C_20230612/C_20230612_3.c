// ������ ������ ������ ����_�ּҸ� ��ȯ�ϴ� �Լ�

#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int* p;

	p = sum(10, 20);
	printf("�� ������ �� : %d\n", *p);

	return 0;
}

int* sum(int a, int b)
{
	int res;

	res = a + b;

	return &res;
}