#include <stdio.h>

int main(void)
{
	/*
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}				// 만약 a가 10보다 크다면, b에 a의 값을 덮어쓰기

	printf("a : %d, b : %d\n", a, b);
	*/

	/*
	int a = 9;

	if (a >= 10)	// a가 10 이상이면 a에 1 대입
	{
		a = 1;
	}
	else			// 그렇지 않은 경우 a에 -1 대입
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

	if (a > 10)			// a가 10보다 크다면 if문 실행, 그렇지 않다면 printf 함수로 이동
	{
		if (b >= 0)		// b가 0 이상이면 b에 1 대입, printf 함수로 이동
		{
			b = 1;
		}
		else			// 그렇지 않다면 b에 -1 대입, printf 함수로 이동
		{
			b = -1;
		}
	}

	printf("a : %d, b = %d\n", a, b);
	return 0;
}