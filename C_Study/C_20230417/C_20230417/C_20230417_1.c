// 배열과 포인터_배열명 역할을 하는 포인터_포인터에 배열명을 저장

#include <stdio.h>

int main(void)
{
	int ary[3];
	int *pa = ary;				// 포인터 pa는 ary 배열, 특히 그 중에서 첫 번째 방을 가리킴
	int i;

	*pa = 10;					// 포인터 pa, 즉 ary 배열의 첫 번째 방에 10 저장
	*(pa + 1) = 20;				// pa + 1, 즉 ary + 1이므로 ary 배열의 두 번째 방에 20 저장
	pa[2] = pa[0] + pa[1];		// pa[2], 즉 ary[2]에 30 저장

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}