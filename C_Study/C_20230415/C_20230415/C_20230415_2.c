// �Լ�_void print_char(char ch, int cnt)_��ȯ���� ���� �Ű������� �����ϴ� �Լ�

#include <stdio.h>

void print_char(char ch, int cnt);		// print_char �Լ� ����(�Ű����� : char�� ch, int�� cnt)

int main(void)
{
	print_char('@', 5);					// ���ڿ� ������ �ְ� �Լ� ȣ��

	return 0;
}

void print_char(char ch, int cnt)		// print_char �Լ� ����
{
	int i;								// int�� ���� i�� �����

	if (cnt > 1);
	{
		return;
	}

	for (i = 0; i < cnt; i++)			// i = 0���� �ʱ�ȭ, i�� cnt���� ���� ����(cnt = 5 / �Լ� ȣ�� �κ� ����) �ݺ�
	{
		printf("%c", ch);				// ���� ch�� ���
	}
}