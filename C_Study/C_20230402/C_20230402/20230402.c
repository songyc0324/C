#include <stdio.h>

int main(void)
{
	/*
	int a = -3, b = -5;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("OK");
		}
	}
	else
	{
		printf("OK");
	}
	*/


	/*
	int rank = 0, m = 0;

	printf("����� �Է��ϼ��� : ");
	scanf("%d", &rank);

	switch (rank)	// rank�� �� Ȯ��
	{
	case 1 :		// rank = 1 �̸�
		m = 300;	// m�� 300�� �����ϰ�
		break;		// switch ��� �ٱ����� �̵�
	case 2 :		// rank = 2 �̸�
		m = 200;	// m�� 200�� �����ϰ�
		break;		// switch ��� �ٱ����� �̵�
	case 3 :		// rank = 3 �̸�
		m = 100;	// m�� 100�� �����ϰ�
		break;		// switch ��� �ٱ����� �̵�
	default :		// rank�� ��ġ�ϴ� case ���� ������
		m = 10;		// m�� 10�� �����ϰ�
		break;		// switch ��� �ٱ����� �̵�
	}

	printf("m : %d\n", m);
	*/

	/*
	int a = 1;

	while (a < 10)
		a = a * 2;
	
	printf("a : %d\n", a);
	*/

	/*
	int a = 1;
	int i;

	for (i = 0; i < 3; i++)		// i�� 0���� �ʱ�ȭ, i�� 3���� ���� ���� i�� 1�� ���ϸ鼭 ���๮�� ����
	{
		a = a * 2;				// i = 0, i = 1, i = 2 �� �� �� �� ����ǹǷ� ���� ����� a = 8
	}

	printf("a : %d\n", a);
	*/

	/*
	int i = 0;

	while (i < 5)
	{
		printf("Hello world!\n");
		i++;
	}
	*/

	/*
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);

	printf("a : %d\n", a);
	*/

	/*
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("��");
		}
		printf("\n");
	}
	*/

	/*
	int j;

	for (j = 1; j <= 9; j++)
	{
		printf("2 �� %d = %d\n", j, 2 * j);
	}
	*/
	
	/*
	int i, j;

	for (i = 0; i < 8; i++)		// 8�� �ݺ�(i ���� 0, 1, 2, 3, 4, 5, 6, 7)
	{
		for (j = 1; j < 10; j++)
		{
			printf("2 �� %d = %d\n", j, 2 * j);
		}
	}
	*/

	/*
	int i, j;

	for (i = 2; i <= 9; i++)							// i�� 2���� 9���� ���ϸ鼭 8�� �ݺ�(2 ~ 9��)
	{
		for (j = 1; j < 10; j++)						// j�� 1���� 9���� ���ϸ鼭 �������� �� ����
		{
			printf("%d �� %d = %d\n", i, j, i * j);		// i = 2�� �� j�� 1���� 9���� ���ϸ鼭 2�� ��� ... 9�ܱ���
		}
		printf("\n");									// �ܺ��� �����ϱ� ���� ����
	}
	*/

	/*
	int i;

	for (i = 1; i <= 19; i++)
	{
		printf("%d �� %d = %d\n", i, i, i * i);
	}
	*/

	/*
	int i;							// �ݺ� Ƚ���� ���� ���� ���� ����
	int sum = 0;					// 1���� 10������ ���� ������ ����(�������)

	for (i = 1; i <= 10; i++)		// i�� 1���� 10����, 10�� �ݺ�
	{
		sum += i;					// i���� sum�� ����
		if (sum > 30) break;		// ������ ���� 30���� Ŀ���� �ݺ��� ����
	}

	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);
	*/

	return 0;
}