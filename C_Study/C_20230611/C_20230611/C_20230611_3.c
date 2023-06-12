// 변수의 영역과 데이터 공유_레지스터 변수

#include <stdio.h>

int main(void)
{
	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}