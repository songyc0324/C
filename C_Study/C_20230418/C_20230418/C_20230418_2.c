// �迭�� ������_�迭 ��� ���� �޶� ���ϴ� �迭�� ����ϴ� ���

#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));	// ���⼭ ���� �Լ��� ȣ���ؼ� ����� ��
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[4]));	// ���⼭ �ٽ� ���� �Լ��� ȣ���ؼ� ���

	return 0;
}

void print_ary(int *pa, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}