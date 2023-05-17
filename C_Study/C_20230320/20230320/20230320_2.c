#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
	int a;

	scanf("%d", &a);
	printf("입력된 값 : %d\n", a);
	*/

	/*
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);
	*/


	char grade;			// 학점을 입력할 변수
	char name[20];		// 이름을 입력할 배열

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);


	return 0;
}