#include <stdio.h>

int main(void)
{
	/*
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;		// ������ ���� ������
	post = (b++) * 3;		// ������ ���� ������

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������ : (++a) * 3 = %d, ������ : (b++) * 3 = %d\n", pre, post);
	*/

	/*
	int a = 10, b = 20, c = 10;
	int res;						// ������� ������ ���� res ����

	res = (a > b);
	printf("a > b : %d\n", res);	// ��� �� res�� �� ������ Ȯ���� �� True���� False���� ���(0�� ��츸 False)
	res = (a >= b);
	printf("a >= b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	*/

	int a = 30;
	int res;

	res = (a > 10) && (a < 20);						// && = AND
	printf("(a > 10) and (a < 20) : %d\n", res);
	res = (a < 10) || (a > 20);						// || = or
	printf("(a < 10) or (a > 20) : %d\n", res);
	res = !(a >= 30);								// ! = NOT / �����̸� ������, ���̸� ��������
	printf("NOT (a >= 30) : %d\n", res);			// ���̹Ƿ� �� -> ����, 0 ���


	return 0;
}