#include <stdio.h>

int add(int x, int y);				// add함수 선언

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = add(a, b);				// add함수 호출
	printf("result : %d\n", res);

	return 0;
}

int add(int x, int y)				// add함수 정의(중괄호) / 반환형(int) 함수명(add)(매개변수1, 매개변수2, ...)
{									// 함수 정의란, 이 함수는 이런 식으로 작동한다는 것을 정의하는 것
	int res;						// temp라는 int형 방을 만들고

	res = x + y;					// temp에는 int x + int y 의 값을 저장하고

	return res;					// temp를 반환한다
}