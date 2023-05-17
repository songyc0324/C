// 배열과 포인터_배열명과 포인터의 차이_포인터가 가지는 변수로서의 특징

#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int *pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;						// pa는 포인터기 때문에 증감연산자가 가능, 배열명은 상수이므로 불가능
	}
}