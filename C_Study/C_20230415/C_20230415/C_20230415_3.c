// �Լ�_void print_line(void)_��ȯ���� �Ű������� ��� ���� �Լ�

#include <stdio.h>

void print_line(void);			// print_line �Լ� ����(��ȯ��, �Ű����� ��� ����)

int main(void)
{
	print_line();				// �Լ� ȣ��
	printf("�й�  �̸�  ����  ����\n");
	print_line();				// �Լ� ȣ��

	return 0;
}

void print_line(void)			// �Լ� ����
{
	int i;						// int�� ���� i�� �����

	for (i = 0; i < 50; i++)	// i�� 0���� 49���� 50�� �ݺ��� ����
	{
		printf("-");			// ��ø� ����ϰ�
	}
	printf("\n");				// 50�� �ݺ��� �������� ���͸� ģ��
}