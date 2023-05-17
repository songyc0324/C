// 함수_재귀호출 함수 무한반복

/*
#include <stdio.h>

void fruit(void);		// fruit 함수 선언(반환형, 매개변수 모두 없음)

int main(void)
{
	fruit(1);			// fruit 함수 호출

	return 0;
}

void fruit(void)		// fruit 함수 정의
{
	printf("apple\n");	// apple을 출력하고
	fruit();			// 함수 호출
}
*/

/*
// 3번만 반복되도록 하는 코드 - 1
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


// 3번만 반복되도록 하는 코드 - 2
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