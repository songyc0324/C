// 변수의 영역과 데이터 공유_주소를 반환하는 함수

#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int* p;

	p = sum(10, 20);
	printf("두 정수의 합 : %d\n", *p);

	return 0;
}

int* sum(int a, int b)
{
	int res;

	res = a + b;

	return &res;
}