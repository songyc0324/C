// �Լ�_int get_pos(void)_��ȯ���� �����ϰ� �Ű������� ���� �Լ�

#include <stdio.h>

int get_pos(void);					// int�� �Լ� get_pos(void) "����"

int main(void)
{
	int res;

	res = get_pos();				// get_pos �Լ� ȣ��, ��ȯ���� int�� res�� ����
	printf("��ȯ�� : %d\n", res);
	return 0;
}

int get_pos(void)					// get_pos �Լ� ����(�� �Լ��� ��� �۵��ϴ°�)
{
	int pos;						// int�� ���� pos��

	printf("��� �Է� : ");
	scanf("%d", &pos);				// scanf�� ���� ����� �Է¹޾� ������ ��

	while (pos < 0)					// while �ݺ��� : ����ó�� �ڵ�(������ �Է¹޾��� ���)
	{
		printf("�߸��� �Է��Դϴ�.\n");
		printf("��� �Է� : ");
		scanf("%d\n", &pos);
	}

	return pos;						// �� ���� ��ȯ�Ѵ�
}