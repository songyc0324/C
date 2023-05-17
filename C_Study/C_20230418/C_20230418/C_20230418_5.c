// 문자_아스키코드_대문자를 소문자로 바꾸기

#include <stdio.h>

int main(void)
{
	char small, cap = 'J';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c\n", small);

	return 0;
}