// 문자_문자 상수 구현 방법_정수처럼 사용되는 문자

#include <stdio.h>

int main(void)
{
	int ch;

	printf("문자 a의 아스키코드값 : %d\n", 'a');
	printf("아스키코드값이 100인 문자 : %c\n", 100);
	printf("문자 상수의 크기 : %dByte\n", sizeof('a'));

	ch = 'a';
	ch++;
	printf("문자 %c의 아스키코드값 : %d\n", ch, ch);

	return 0;
}