// ������_���� ���� ������_�پ��� ������ ����

#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, tot;
	double avg;
	int *pa, * pb;
	int *pt = &tot;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);	// *pa = a�� �ּ� �̹Ƿ� �ᱹ a�� ���� 10, *pb = b�� ��������
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}