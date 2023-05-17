// 포인터_포인터가 필요한 이유_두 변수의 값 바꾸기
/*
#include <stdio.h>

void swap(int *pa, int *pb);			// swap 함수 선언

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);						// swap 함수 호출(int *pa는 &a에, int *pb는 &b에 대응)
	printf("a : %d, b : %d\n", a, b);	// 변수 a값과 b값 출력

	return 0;
}


void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;					// int형 변수 temp에 포인터 pa값 저장
	*pa = *pb;					// 포인터 pa에 포인터 pb값 덮어씌움
	*pb = temp;					// int형 변수 temp에 포인터 pb값을 덮어씌움
}								// 위 두 줄을 통해 a값과 b값을 서로 교환
*/


// 만약 포인터 없이 변수만으로 두 변수의 값을 바꾸려고 하면
/*
#include <stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 20;

	swap();
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(void)
{
	int temp;

	temp = a;		// main 함수에서 a와 b는 지역변수이므로 swap 함수에서는 정의되어 있지 않음
	a = b;			// 따라서 포인터 없이 변수만으로 작업하려면 초기화도 다시 해야 하고, 값이 바뀔 경우 전부 손대야 하는 번거로움 
	b = temp;
}
*/

// 또 다른 방법이지만 역시 작동하지 않는

#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int x, int y)		// 포인터가 아닌 다른 두 변수를 사용할 경우
{							// 오류는 나지 않지만 main 함수에서의 a, b값을 각각 복사해 사용하기 때문에
	int tot;				// swap 함수 내에서는 바뀔지 몰라도 실제 메인 함수에서의 a, b값은 바뀌지 않음

	tot = x;				// 그래서 포인터를 사용하는 이유는, 포인터는 변수의 주소 자체를 다루기 때문
	x = y;
	y = tot;
}