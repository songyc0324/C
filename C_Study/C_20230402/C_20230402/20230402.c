#include <stdio.h>

int main(void)
{
	/*
	int a = -3, b = -5;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("OK");
		}
	}
	else
	{
		printf("OK");
	}
	*/


	/*
	int rank = 0, m = 0;

	printf("등수를 입력하세요 : ");
	scanf("%d", &rank);

	switch (rank)	// rank의 값 확인
	{
	case 1 :		// rank = 1 이면
		m = 300;	// m에 300을 대입하고
		break;		// switch 블록 바깥으로 이동
	case 2 :		// rank = 2 이면
		m = 200;	// m에 200을 대입하고
		break;		// switch 블록 바깥으로 이동
	case 3 :		// rank = 3 이면
		m = 100;	// m에 100을 대입하고
		break;		// switch 블록 바깥으로 이동
	default :		// rank와 일치하는 case 값이 없으면
		m = 10;		// m에 10을 대입하고
		break;		// switch 블록 바깥으로 이동
	}

	printf("m : %d\n", m);
	*/

	/*
	int a = 1;

	while (a < 10)
		a = a * 2;
	
	printf("a : %d\n", a);
	*/

	/*
	int a = 1;
	int i;

	for (i = 0; i < 3; i++)		// i를 0으로 초기화, i가 3보다 작은 동안 i에 1씩 더하면서 실행문을 실행
	{
		a = a * 2;				// i = 0, i = 1, i = 2 일 때 세 번 실행되므로 최종 결과는 a = 8
	}

	printf("a : %d\n", a);
	*/

	/*
	int i = 0;

	while (i < 5)
	{
		printf("Hello world!\n");
		i++;
	}
	*/

	/*
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);

	printf("a : %d\n", a);
	*/

	/*
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("★");
		}
		printf("\n");
	}
	*/

	/*
	int j;

	for (j = 1; j <= 9; j++)
	{
		printf("2 × %d = %d\n", j, 2 * j);
	}
	*/
	
	/*
	int i, j;

	for (i = 0; i < 8; i++)		// 8번 반복(i 값이 0, 1, 2, 3, 4, 5, 6, 7)
	{
		for (j = 1; j < 10; j++)
		{
			printf("2 × %d = %d\n", j, 2 * j);
		}
	}
	*/

	/*
	int i, j;

	for (i = 2; i <= 9; i++)							// i는 2에서 9까지 변하면서 8번 반복(2 ~ 9단)
	{
		for (j = 1; j < 10; j++)						// j는 1부터 9까지 변하면서 곱해지는 수 설정
		{
			printf("%d × %d = %d\n", i, j, i * j);		// i = 2일 때 j는 1부터 9까지 변하면서 2단 출력 ... 9단까지
		}
		printf("\n");									// 단별로 구분하기 위한 엔터
	}
	*/

	/*
	int i;

	for (i = 1; i <= 19; i++)
	{
		printf("%d × %d = %d\n", i, i, i * i);
	}
	*/

	/*
	int i;							// 반복 횟수를 세기 위한 제어 변수
	int sum = 0;					// 1부터 10까지의 합을 누적할 변수(저장공간)

	for (i = 1; i <= 10; i++)		// i는 1부터 10까지, 10번 반복
	{
		sum += i;					// i값을 sum에 누적
		if (sum > 30) break;		// 누적된 값이 30보다 커지면 반복문 종료
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);
	*/

	return 0;
}