// 배열과 포인터_배열 요소 수가 달라도 원하는 배열을 출력하는 방법

#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));	// 여기서 먼저 함수를 호출해서 사용한 후
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[4]));	// 여기서 다시 새로 함수를 호출해서 사용

	return 0;
}

void print_ary(int *pa, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}