// 응용 포인터_2중 포인터 활용 예 1

#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	char* pa = "Success";
	char* pb = "faliure";

	printf("pa -> %s, pb -> %s\n", pa, pb);

	swap_ptr(&pa, &pb);

	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}