#include <stdio.h>

int main(void)
{
	/*
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}				// ���� a�� 10���� ũ�ٸ�, b�� a�� ���� �����

	printf("a : %d, b : %d\n", a, b);
	*/

	/*
	int a = 9;

	if (a >= 10)	// a�� 10 �̻��̸� a�� 1 ����
	{
		a = 1;
	}
	else			// �׷��� ���� ��� a�� -1 ����
	{
		a = -1;
	}

	printf("a : %d\n", a);
	*/

	/*
	int a = 1, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}

	printf("b : %d\n", b);
	*/



	int a = 5, b = 10;

	if (a > 10)			// a�� 10���� ũ�ٸ� if�� ����, �׷��� �ʴٸ� printf �Լ��� �̵�
	{
		if (b >= 0)		// b�� 0 �̻��̸� b�� 1 ����, printf �Լ��� �̵�
		{
			b = 1;
		}
		else			// �׷��� �ʴٸ� b�� -1 ����, printf �Լ��� �̵�
		{
			b = -1;
		}
	}

	printf("a : %d, b = %d\n", a, b);
	return 0;
}