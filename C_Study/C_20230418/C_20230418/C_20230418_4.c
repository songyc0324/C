// ����_���� ��� ���� ���_����ó�� ���Ǵ� ����

#include <stdio.h>

int main(void)
{
	int ch;

	printf("���� a�� �ƽ�Ű�ڵ尪 : %d\n", 'a');
	printf("�ƽ�Ű�ڵ尪�� 100�� ���� : %c\n", 100);
	printf("���� ����� ũ�� : %dByte\n", sizeof('a'));

	ch = 'a';
	ch++;
	printf("���� %c�� �ƽ�Ű�ڵ尪 : %d\n", ch, ch);

	return 0;
}