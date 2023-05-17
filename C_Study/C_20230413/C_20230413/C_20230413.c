#include <stdio.h>
#include <string.h>

int main(void)
{
	/*
	int score[5];
	int i, cnt, tot = 0;
	double avg;

	cnt = sizeof(score) / sizeof(score[0]);		// sizeof(score) = 20, sizeof(score[0]) = 4, answer = 5

	for (i = 0; i < cnt; i++)					// cnt = 5
	{
		printf("%d번째 과목 점수 입력 : ", i + 1);
		scanf("%d", &score[i]);					// 0부터 4까지 다섯 번 반복, score 배열의 각 방에 정수 입력
	}
	for (i = 0; i < cnt; i++)					// cnt = 5
	{
		tot += score[i];						// 0부터 4까지 다섯 번 반복, tot에 score 배열 각 방의 정수 누적합
	}
	avg = tot / (double)cnt;					// tot를 실수형 cnt(5.00...)으로 나눠 평균을 avg에 저장

	for (i = 0; i < cnt; i++)					// cnt = 5
	{
		printf("%5d", score[i]);				// 0부터 4까지 다섯 번 반복, score 배열 각 방에 있는 정수 출력
	}
	printf("\n");

	printf("평균 : %.3lf\n", avg);
	*/

	/*
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("새 문자열 입력 : ");
	scanf("%s", str);
	printf("입력된 새 문자열 : %s\n", str);
	*/

	/*
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n", str);
	*/

	/*
	char str1[80] = "cat";
	char str2[80];
										// strcpy(a, b) -> a는 저장될 곳의 배열명, b는 저장할 문자열(배열명 가능)
	strcpy(str1, "tiger");				// str1 배열에 tiger 복사
	strcpy(str2, str1);					// str2 배열에 str1 배열의 문자열 복사
	printf("%s, %s\n", str1, str2);		// strcpy는 오른쪽 값을 왼쪽 변수에 대입하는 연산으로 이해
	*/


	char str[80];				// str 배열 선언

	printf("문자열 입력 : ");
	gets(str);					// 빈칸을 포함한 문자열 입력
	puts("입력된 문자열 : ");	// 문자열 상수 출력
	puts(str);					// 배열에 저장된 문자열 출력





	return 0;
}