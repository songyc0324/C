// ������_�����Ͱ� �ʿ��� ����_�� ������ �� �ٲٱ�

#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);		// &a = *pa, &b = *pb ���Կ��� ����
	printf("a : %d, b : %d", a, b);

	return 0;
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;		// ������ pa�� ����Ű�� �ּ��� ��( = a�� ��)�� temp�� ����
	*pa = *pb;		// ������ pb�� ����Ű�� �ּ��� ���� ������ pa�� ����(�ٲٱ�)
	*pb = temp;		// temp�� ��(������ pa�� ����Ű�� �ּ��� ��)�� ������ pb�� ����
}