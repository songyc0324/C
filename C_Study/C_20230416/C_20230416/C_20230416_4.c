// ������_�����Ͱ� �ʿ��� ����_�� ������ �� �ٲٱ�
/*
#include <stdio.h>

void swap(int *pa, int *pb);			// swap �Լ� ����

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);						// swap �Լ� ȣ��(int *pa�� &a��, int *pb�� &b�� ����)
	printf("a : %d, b : %d\n", a, b);	// ���� a���� b�� ���

	return 0;
}


void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;					// int�� ���� temp�� ������ pa�� ����
	*pa = *pb;					// ������ pa�� ������ pb�� �����
	*pb = temp;					// int�� ���� temp�� ������ pb���� �����
}								// �� �� ���� ���� a���� b���� ���� ��ȯ
*/


// ���� ������ ���� ���������� �� ������ ���� �ٲٷ��� �ϸ�
/*
#include <stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 20;

	swap();
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(void)
{
	int temp;

	temp = a;		// main �Լ����� a�� b�� ���������̹Ƿ� swap �Լ������� ���ǵǾ� ���� ����
	a = b;			// ���� ������ ���� ���������� �۾��Ϸ��� �ʱ�ȭ�� �ٽ� �ؾ� �ϰ�, ���� �ٲ� ��� ���� �մ�� �ϴ� ���ŷο� 
	b = temp;
}
*/

// �� �ٸ� ��������� ���� �۵����� �ʴ�

#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int x, int y)		// �����Ͱ� �ƴ� �ٸ� �� ������ ����� ���
{							// ������ ���� ������ main �Լ������� a, b���� ���� ������ ����ϱ� ������
	int tot;				// swap �Լ� �������� �ٲ��� ���� ���� ���� �Լ������� a, b���� �ٲ��� ����

	tot = x;				// �׷��� �����͸� ����ϴ� ������, �����ʹ� ������ �ּ� ��ü�� �ٷ�� ����
	x = y;
	y = tot;
}