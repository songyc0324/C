#include <stdio.h>
#include <string.h>

int main(void)
{
	/*
	float ft = 1.234567890123456789;	// ��ȿ���ڰ� ���� ������ �ʱ�ȭ
	double db = 1.234567890123456789;

	printf("float�� ������ �� : %.20f\n", ft);		// �Ҽ��� ���� 20�ڸ����� ���
	printf("double�� ������ �� : %.20lf\n", db);	// float�� %f, double�� %lf �� ���
	*/

	/*
	char fruit[20] = "strawberry";				// char �迭 ����� �ʱ�ȭ

	printf("���� : %s\n", fruit);				// �迭������ strawberry ���
	printf("������ : %s %s\n", fruit, "jam");	// ���ڿ��� %s�� ��� / ù ��° %s���� ���� fruit, �� ��° %s���� jam
	printf("�����ϴ� ���� : %s\n", fruit);
	*/

	/*
	// ����� 2�࿡ <string.h> ��� ���� ����
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);			// strawberry ���
	strcpy(fruit, "banana");		// fruit�� banana ����(strcpy() : ���� �Լ�)
	printf("%s\n", fruit);			// banana ���
	*/


	int income = 0;					// �ҵ��(income) �ʱ�ȭ
	double tax;						// ���� ����
	const double tax_rate = 0.12;	// ����(tax_rate) �ʱ�ȭ

	income = 456;
	tax = income * tax_rate;
	printf("������ %.1lf�Դϴ�.\n", tax);


	return 0;
}