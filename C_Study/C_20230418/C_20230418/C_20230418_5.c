// ����_�ƽ�Ű�ڵ�_�빮�ڸ� �ҹ��ڷ� �ٲٱ�

#include <stdio.h>

int main(void)
{
	char small, cap = 'J';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c\n", small);

	return 0;
}