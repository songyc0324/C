// 포인터_여러 가지 포인터_다양한 포인터 사용법

#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, tot;
	double avg;
	int *pa, * pb;
	int *pt = &tot;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);	// *pa = a의 주소 이므로 결국 a의 값인 10, *pb = b도 마찬가지
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}