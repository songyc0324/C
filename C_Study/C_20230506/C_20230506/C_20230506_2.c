#include <stdio.h>

int main(void)
{
	int ary[5] = { 1, 2, 3, 4, 5 };
	int *pa = ary;
	int *pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

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