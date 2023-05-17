#include <stdio.h>

int main(void)
{
	/*
	
	int a;		//int(정수)형 변수 선언
	int b, c;	//int형 변수를 동시 선언
	double da;	//double(실수)형 변수 선언
	char ch;	//char형 변수 선언

	a = 10;		//int형 변수 a에 정수 10 대입
	b = a;		//int형 변수 b에 변수 a의 값 대입
	c = a + 20;	//int형 변수 c에 변수 a와 정수 10의 합을 대입
	da = 3.5;	//double형 변수 da에 실수 3.5 대입
	ch = 'A';	//char형 변수 ch에 문자(문자열 아님) A 대입

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);		//%d 는 정수값을 출력할 때 사용
	printf("변수 da의 값 : %.1lf\n", da);	//%lf 는 실수값을 출력할 때 사용
	//(중간에 .n은 소수점 n번째 자리까지 출력하라는 뜻)
	printf("변수 ch의 값 : %c\n", ch);		//%c 는 문자(문자열 아님)를 출력할 때 사용



	int a;			//int형 변수 a 선언, 9행에서 대입 연산으로 초기화
	int b = 20;		//변수 선언과 동시에 초기화
	int c;			//int형 변수 c 선언, 초기화하지 않음

	a = 10;
	printf("a : %d\n", a);	//a에 10 대입, 초기화
	printf("b : %d\n", b);
	printf("c : %d\n", c);

	

	char ch1 = 'A';		// 문자로 초기화
	char ch2 = 65;		// 문자 'A'의 아스키코드값으로 초기화

	printf("문자 %c의 아스키코드값 : %d\n", ch1, ch1);
	printf("아스키코드값이 %d인 문자 : %c\n", ch2, ch2);
	


	short sh = 32767;					// short형의 최댓값 초기화
	int in = 2147483648;				// int형의 최솟값 초기화
	long ln = 2146483648;				// long형의 최댓값 초기화
	long long lln = 123451234512345;	// 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);	// long long형은 lld로 출력
	
	printf("long long형의 크기 : %dByte\n", sizeof(long long));		// 자료형 크기 확인 코드
																	// long long 자료형 크기는 8Byte = 64bit(1Byte = 8bit)
	*/






	unsigned int a;

	a = 4294967295;		// 큰 양수 저장
	printf("%d\n", a);	// %d(정수형)로 출력
	a = -1;				// 음수 저장
	printf("%u\n", a);	// %u로 출력(음수 저장 후 %u 로 출력하면 양수 출력)


	return 0;
}