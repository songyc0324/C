// 함수_void print_char(char ch, int cnt)_반환형이 없고 매개변수가 존재하는 함수

#include <stdio.h>

void print_char(char ch, int cnt);		// print_char 함수 선언(매개변수 : char형 ch, int형 cnt)

int main(void)
{
	print_char('@', 5);					// 문자와 정수를 주고 함수 호출

	return 0;
}

void print_char(char ch, int cnt)		// print_char 함수 정의
{
	int i;								// int형 변수 i를 만들고

	if (cnt > 1);
	{
		return;
	}

	for (i = 0; i < cnt; i++)			// i = 0으로 초기화, i가 cnt보다 작은 동안(cnt = 5 / 함수 호출 부분 참조) 반복
	{
		printf("%c", ch);				// 문자 ch를 출력
	}
}