// �迭�� ������_�������� ������ ���� ����

#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary;
	int *pb = pa + 3;	// = ary[3] = 40

	printf("pa = %u\n", pa);
	printf("pb = %u\n", pb);
	pa++;
	printf("pb - pa = %u\n", pb - pa);

	printf("�տ� �ִ� �迭 ����� �� ��� : ");

	if (pa < pb)
	{
		printf("%d\n", *pa);
	}
	else
	{
		printf("%d\n", *pb);
	}

	return 0;
}