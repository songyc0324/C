// �迭�� ������_�迭������ �迭 ��� ����ϱ�_�迭�� ���� ���� ����

#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;				// ary ù ��° �迭 ��ҿ� 10 ����
	*(ary + 1) = *(ary + 0) + 10;	// ary �� ��° �迭 ��ҿ� ù ��° �迭 ��� + 10 ����

	printf("�� ��° �迭 ��ҿ� �� �Է� : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
}