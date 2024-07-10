#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TAX_RATE  0.2 //define을 이용한 기호 상수 정의

int main(void)
{
	const int MONTHS = 12; //const를 이용한 기호 상수 정의
	int m_salary, y_salary;	// 변수 선언

	printf("월급을 입력하시요: ");	// 입력 안내문
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;	// 순수입 계산
	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %f입니다.\n", y_salary * TAX_RATE);

	return 0;
}