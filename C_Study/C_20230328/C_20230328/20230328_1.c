#include <stdio.h>

int main(void)
{
	/*
	int a = 10, b = 20, res;

	a + b;										// 연산 결과는 폐기
	printf("%d + %d = %d\n", a, b, a + b);		// 연산 결과를 바로 출력

	res = a + b;								// 연산 결과를 변수에 저장
	printf("%d + %d = %d\n", a, b, res);		// 변수로 출력
	*/

	/*
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);	// a와 b의 값을 실수형으로 변환 / 그냥 나눌 경우 몫 부분만 출력
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 %.1lf\n", res);

	a = (int)res;						// res 값에서 정수 부분만 추려내기
	printf("(int) %.1lf의 결과 %d\n", res, a);
	*/

	/*
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식 결과값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));
	*/

	/*
	int a = 10, b = 20;
	int res = 2;

	a += 20;			// 변수 a에 a + 20 = 30 을 대입
	res *= b + 10;		// 변수 res에 res * (b + 10) = 60 을 대입

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);
	*/

	/*
	int a = 5, b = 30;
	int res;

	res = (++a, ++b);		// 가장 마지막에 있는 b++ 가 res 변수에 저장

	printf("a : %d, b : %d\n", a, b);
	printf("res : %d\n", res);
	*/

	/*
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;		// a가 b보다 크다면 a를, 그렇지 않다면 b를 res 변수에 저장
	printf("큰 값 : %d\n", res);
	*/

	/*
	int a = 10;		// 비트열 00000000 00000000 00000000 00001010
	int b = 12;		// 비트열 00000000 00000000 00000000 00001100

	printf("a & b : %d\n", a & b);		// & : 비트 단위 논리곱(AND) 연산자 / 두 비트가 모두 1인 경우만 1로 계산
	printf("a ^ b : %d\n", a ^ b);		// ^ : 비트 단위 배타적 논리합(XOR) 연산자 / 두 비트가 서로 다른 경우만 1로 계산
	printf("a | b : %d\n", a | b);		// | : 비트 단위 논리합(OR) 연산자 / 두 비트 중 하나라도 1이면 1로 계산
	printf("~a : %d\n", ~a);			// ~ : 비트 단위 부정(NOT) 연산자 / 1은 0으로, 0은 1로 바꿔 계산
	printf("a << 1 : %d\n", a << 1);	// 왼쪽 비트 이동 연산자 / 실제 비트를 하나씩 왼쪽으로 이동(0100 -> 1000)
	printf("a << 2 : %d\n", a >> 2);	// 오른쪽 비트 이동 연산자 / 실제 비트를 오른쪽으로 이동(1010 -> 0101)
	*/

	int a = 10, b = 5;
	int res;

	res = a / b * 2;			// 우선순위가 같으므로 왼쪽부터 차례로 연산
	printf("res = %d\n", res);
	res = ++a * 3;				// a값을 1 증가시킨 후 3을 곱한다
	printf("res = %d\n", res);
	res = a > b && a != 5;		// a > b 와 a != 5 의 결과를 && 연산
	printf("res = %d\n", res);
	res = a % 3 == 0;			// a % 3 이 0과 같은지 확인
	printf("res = %d\n", res);

	return 0;
}