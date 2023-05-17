// 포인터_포인터와 간접참조 연산자_포인터 선언과 사용

#include <stdio.h>

int main(void)
{
	int a;		// 평범한 변수 선언
	int *pa;	// 포인터 선언

	pa = &a;	// 포인터에 a의 메모리 주소 대입
	*pa = 10;	// 포인터로 변수 a에 10 대입 : 포인터 pa는 a의 주소와 같으므로 결국 a에 10을 대입하는 것과 동일

	printf("포인터로 a값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);

	return 0;
}