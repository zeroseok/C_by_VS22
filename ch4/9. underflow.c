#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x = 1.23456e-38;
	float y = 1.23456e-40;
	float z = 1.23456e-46; //언더플로우가 발생한다.

	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);
}
