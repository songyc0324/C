#include <stdio.h>

int main(void)
{
	/*
	int a = 10, b = 20, res;

	a + b;										// ���� ����� ���
	printf("%d + %d = %d\n", a, b, a + b);		// ���� ����� �ٷ� ���

	res = a + b;								// ���� ����� ������ ����
	printf("%d + %d = %d\n", a, b, res);		// ������ ���
	*/

	/*
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);	// a�� b�� ���� �Ǽ������� ��ȯ / �׳� ���� ��� �� �κи� ���
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� %.1lf\n", res);

	a = (int)res;						// res ������ ���� �κи� �߷�����
	printf("(int) %.1lf�� ��� %d\n", res, a);
	*/

	/*
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof(a));
	printf("double�� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("���� ������� ũ�� : %d\n", sizeof(1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
	*/

	/*
	int a = 10, b = 20;
	int res = 2;

	a += 20;			// ���� a�� a + 20 = 30 �� ����
	res *= b + 10;		// ���� res�� res * (b + 10) = 60 �� ����

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);
	*/

	/*
	int a = 5, b = 30;
	int res;

	res = (++a, ++b);		// ���� �������� �ִ� b++ �� res ������ ����

	printf("a : %d, b : %d\n", a, b);
	printf("res : %d\n", res);
	*/

	/*
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;		// a�� b���� ũ�ٸ� a��, �׷��� �ʴٸ� b�� res ������ ����
	printf("ū �� : %d\n", res);
	*/

	/*
	int a = 10;		// ��Ʈ�� 00000000 00000000 00000000 00001010
	int b = 12;		// ��Ʈ�� 00000000 00000000 00000000 00001100

	printf("a & b : %d\n", a & b);		// & : ��Ʈ ���� ����(AND) ������ / �� ��Ʈ�� ��� 1�� ��츸 1�� ���
	printf("a ^ b : %d\n", a ^ b);		// ^ : ��Ʈ ���� ��Ÿ�� ����(XOR) ������ / �� ��Ʈ�� ���� �ٸ� ��츸 1�� ���
	printf("a | b : %d\n", a | b);		// | : ��Ʈ ���� ����(OR) ������ / �� ��Ʈ �� �ϳ��� 1�̸� 1�� ���
	printf("~a : %d\n", ~a);			// ~ : ��Ʈ ���� ����(NOT) ������ / 1�� 0����, 0�� 1�� �ٲ� ���
	printf("a << 1 : %d\n", a << 1);	// ���� ��Ʈ �̵� ������ / ���� ��Ʈ�� �ϳ��� �������� �̵�(0100 -> 1000)
	printf("a << 2 : %d\n", a >> 2);	// ������ ��Ʈ �̵� ������ / ���� ��Ʈ�� ���������� �̵�(1010 -> 0101)
	*/

	int a = 10, b = 5;
	int res;

	res = a / b * 2;			// �켱������ �����Ƿ� ���ʺ��� ���ʷ� ����
	printf("res = %d\n", res);
	res = ++a * 3;				// a���� 1 ������Ų �� 3�� ���Ѵ�
	printf("res = %d\n", res);
	res = a > b && a != 5;		// a > b �� a != 5 �� ����� && ����
	printf("res = %d\n", res);
	res = a % 3 == 0;			// a % 3 �� 0�� ������ Ȯ��
	printf("res = %d\n", res);

	return 0;
}