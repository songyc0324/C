#include <stdio.h>

int add(int x, int y);				// add�Լ� ����

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = add(a, b);				// add�Լ� ȣ��
	printf("result : %d\n", res);

	return 0;
}

int add(int x, int y)				// add�Լ� ����(�߰�ȣ) / ��ȯ��(int) �Լ���(add)(�Ű�����1, �Ű�����2, ...)
{									// �Լ� ���Ƕ�, �� �Լ��� �̷� ������ �۵��Ѵٴ� ���� �����ϴ� ��
	int res;						// temp��� int�� ���� �����

	res = x + y;					// temp���� int x + int y �� ���� �����ϰ�

	return res;					// temp�� ��ȯ�Ѵ�
}