#include <stdio.h>

int main(void)
{
	/*
	
	int a;		//int(����)�� ���� ����
	int b, c;	//int�� ������ ���� ����
	double da;	//double(�Ǽ�)�� ���� ����
	char ch;	//char�� ���� ����

	a = 10;		//int�� ���� a�� ���� 10 ����
	b = a;		//int�� ���� b�� ���� a�� �� ����
	c = a + 20;	//int�� ���� c�� ���� a�� ���� 10�� ���� ����
	da = 3.5;	//double�� ���� da�� �Ǽ� 3.5 ����
	ch = 'A';	//char�� ���� ch�� ����(���ڿ� �ƴ�) A ����

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);		//%d �� �������� ����� �� ���
	printf("���� da�� �� : %.1lf\n", da);	//%lf �� �Ǽ����� ����� �� ���
	//(�߰��� .n�� �Ҽ��� n��° �ڸ����� ����϶�� ��)
	printf("���� ch�� �� : %c\n", ch);		//%c �� ����(���ڿ� �ƴ�)�� ����� �� ���



	int a;			//int�� ���� a ����, 9�࿡�� ���� �������� �ʱ�ȭ
	int b = 20;		//���� ����� ���ÿ� �ʱ�ȭ
	int c;			//int�� ���� c ����, �ʱ�ȭ���� ����

	a = 10;
	printf("a : %d\n", a);	//a�� 10 ����, �ʱ�ȭ
	printf("b : %d\n", b);
	printf("c : %d\n", c);

	

	char ch1 = 'A';		// ���ڷ� �ʱ�ȭ
	char ch2 = 65;		// ���� 'A'�� �ƽ�Ű�ڵ尪���� �ʱ�ȭ

	printf("���� %c�� �ƽ�Ű�ڵ尪 : %d\n", ch1, ch1);
	printf("�ƽ�Ű�ڵ尪�� %d�� ���� : %c\n", ch2, ch2);
	


	short sh = 32767;					// short���� �ִ� �ʱ�ȭ
	int in = 2147483648;				// int���� �ּڰ� �ʱ�ȭ
	long ln = 2146483648;				// long���� �ִ� �ʱ�ȭ
	long long lln = 123451234512345;	// ���� ū �� �ʱ�ȭ

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln);	// long long���� lld�� ���
	
	printf("long long���� ũ�� : %dByte\n", sizeof(long long));		// �ڷ��� ũ�� Ȯ�� �ڵ�
																	// long long �ڷ��� ũ��� 8Byte = 64bit(1Byte = 8bit)
	*/






	unsigned int a;

	a = 4294967295;		// ū ��� ����
	printf("%d\n", a);	// %d(������)�� ���
	a = -1;				// ���� ����
	printf("%u\n", a);	// %u�� ���(���� ���� �� %u �� ����ϸ� ��� ���)


	return 0;
}