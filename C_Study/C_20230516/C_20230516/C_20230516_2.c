#include <stdio.h>

int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}

	printf("�빮�� : %c\n", cap);
	printf("�ҹ��� : %c\n", small);

	return 0;
}