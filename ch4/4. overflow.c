#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;			// 최대값으로 초기화한다.
	unsigned short u_money = USHRT_MAX; 	// 최대값으로 초기화한다.

	s_money = s_money + 1; //오버플로우가 발생
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1; //오버플로우가 발생
	printf("u_money = %d\n", u_money);

	return 0;
}