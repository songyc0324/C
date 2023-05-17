#include <stdio.h>

int main(void)
{
	/*
	int ary[5];		// int형 요소 5개의 배열을 선언

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);
	*/


	int score[5], i, tot = 0;
	double avg;

	for (i = 0; i < 5; i++)		// i는 0부터 4까지 5번 반복
	{
		scanf("%d", &score[i]);	// 각 배열 요소에 성적 입력
	}
	for (i = 0; i < 5; i++)
	{
		tot += score[i];
	}
	avg = tot / 5.0;
	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf", avg);



	return 0;
}