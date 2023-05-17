// 포인터_주소 연산자(&)_변수의 메모리 주소 확인

#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %p\n", &a);		// 주소연산자 &로 각 값의 방의 주소를 확인
	printf("double형 변수의 주소 : %x\n", &b);	// %p는 받은 포인터, 즉 주소 값을 16진수로 출력
	printf("char형 변수의 주소 : %x\n", &c);	// %x는 단순하게 정수형을 16진수로 출력

	return 0;
}