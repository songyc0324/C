// 함수_void print_line(void)_반환형과 매개변수가 모두 없는 함수

#include <stdio.h>

void print_line(void);			// print_line 함수 선언(반환형, 매개변수 모두 없음)

int main(void)
{
	print_line();				// 함수 호출
	printf("학번  이름  전공  학점\n");
	print_line();				// 함수 호출

	return 0;
}

void print_line(void)			// 함수 정의
{
	int i;						// int형 변수 i를 만들고

	for (i = 0; i < 50; i++)	// i는 0부터 49까지 50번 반복할 동안
	{
		printf("-");			// 대시를 출력하고
	}
	printf("\n");				// 50번 반복이 끝났으면 엔터를 친다
}