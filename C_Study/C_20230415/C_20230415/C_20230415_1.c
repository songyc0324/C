// 함수_int get_pos(void)_반환형이 존재하고 매개변수가 없는 함수

#include <stdio.h>

int get_pos(void);					// int형 함수 get_pos(void) "선언"

int main(void)
{
	int res;

	res = get_pos();				// get_pos 함수 호출, 반환값은 int형 res에 저장
	printf("반환값 : %d\n", res);
	return 0;
}

int get_pos(void)					// get_pos 함수 정의(이 함수는 어떻게 작동하는가)
{
	int pos;						// int형 변수 pos에

	printf("양수 입력 : ");
	scanf("%d", &pos);				// scanf를 통해 양수를 입력받아 저장한 후

	while (pos < 0)					// while 반복문 : 예외처리 코드(음수를 입력받았을 경우)
	{
		printf("잘못된 입력입니다.\n");
		printf("양수 입력 : ");
		scanf("%d\n", &pos);
	}

	return pos;						// 그 값을 반환한다
}