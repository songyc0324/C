// �Լ�_���ȣ�� �Լ� ���ѹݺ�

/*
#include <stdio.h>

void fruit(void);		// fruit �Լ� ����(��ȯ��, �Ű����� ��� ����)

int main(void)
{
	fruit(1);			// fruit �Լ� ȣ��

	return 0;
}

void fruit(void)		// fruit �Լ� ����
{
	printf("apple\n");	// apple�� ����ϰ�
	fruit();			// �Լ� ȣ��
}
*/

/*
// 3���� �ݺ��ǵ��� �ϴ� �ڵ� - 1
#include <stdio.h>

void fruit(int n);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int n)
{
	printf("apple\n");
	if (n == 3)
	{
		return;
	}
	fruit(n + 1);
}
*/


// 3���� �ݺ��ǵ��� �ϴ� �ڵ� - 2
#include <stdio.h>

void fruit(int n);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int n)
{
	printf("apple\n");
	if (n == 3)
	{
		return;
	}
	fruit(n + 1);
	printf("jam\n");
}