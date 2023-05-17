#include <stdio.h>

int main(void)
{
	int ch;

	printf("문자 입력 : ");
	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}