#include <stdio.h>

int main(void)
{
	/*
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;		// 전위형 증감 연산자
	post = (b++) * 3;		// 후위형 증감 연산자

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);
	*/

	/*
	int a = 10, b = 20, c = 10;
	int res;						// 결과값을 저장할 변수 res 지정

	res = (a > b);
	printf("a > b : %d\n", res);	// 출력 시 res에 들어간 변수를 확인한 후 True인지 False인지 출력(0일 경우만 False)
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
	res = !(a >= 30);								// ! = NOT / 거짓이면 참으로, 참이면 거짓으로
	printf("NOT (a >= 30) : %d\n", res);			// 참이므로 참 -> 거짓, 0 출력


	return 0;
}