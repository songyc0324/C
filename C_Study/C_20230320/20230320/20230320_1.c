#include <stdio.h>
#include <string.h>

int main(void)
{
	/*
	float ft = 1.234567890123456789;	// 유효숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);		// 소수점 이하 20자리까지 출력
	printf("double형 변수의 값 : %.20lf\n", db);	// float은 %f, double은 %lf 로 출력
	*/

	/*
	char fruit[20] = "strawberry";				// char 배열 선언과 초기화

	printf("딸기 : %s\n", fruit);				// 배열명으로 strawberry 출력
	printf("딸기잼 : %s %s\n", fruit, "jam");	// 문자열은 %s로 출력 / 첫 번째 %s에는 변수 fruit, 두 번째 %s에는 jam
	printf("좋아하는 과일 : %s\n", fruit);
	*/

	/*
	// 여기는 2행에 <string.h> 헤더 파일 포함
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);			// strawberry 출력
	strcpy(fruit, "banana");		// fruit에 banana 복사(strcpy() : 복사 함수)
	printf("%s\n", fruit);			// banana 출력
	*/


	int income = 0;					// 소득액(income) 초기화
	double tax;						// 세금 선언
	const double tax_rate = 0.12;	// 세율(tax_rate) 초기화

	income = 456;
	tax = income * tax_rate;
	printf("세금은 %.1lf입니다.\n", tax);


	return 0;
}