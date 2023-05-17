// 배열과 포인터_배열명으로 배열 요소 사용하기_배열명에 정수 연산 수행

#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;				// ary 첫 번째 배열 요소에 10 대입
	*(ary + 1) = *(ary + 0) + 10;	// ary 두 번째 배열 요소에 첫 번째 배열 요소 + 10 대입

	printf("세 번째 배열 요소에 값 입력 : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
}