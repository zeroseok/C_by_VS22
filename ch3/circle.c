#define _CRT_SECURE_NO_WARNINGS
/* 원의 면적을 계산하는 프로그램*/
#include <stdio.h>

int main(void)
{
	float radius;	// 원의 반지름
	float area;	// 면적

	printf("반지름을 입력하시오: ");
	scanf_s("%f", &radius);

	area = 3.14 * radius * radius;

	printf("원의 면적: %f\n", area);

	return 0;
}
