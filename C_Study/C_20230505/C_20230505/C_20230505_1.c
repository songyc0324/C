// 포인터_포인터가 필요한 이유_두 변수의 값 바꾸기

#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);		// &a = *pa, &b = *pb 대입연산 수행
	printf("a : %d, b : %d", a, b);

	return 0;
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;		// 포인터 pa가 가리키는 주소의 값( = a의 값)을 temp에 저장
	*pa = *pb;		// 포인터 pb가 가리키는 주소의 값을 포인터 pa에 저장(바꾸기)
	*pb = temp;		// temp의 값(포인터 pa가 가리키는 주소의 값)을 포인터 pb에 저장
}