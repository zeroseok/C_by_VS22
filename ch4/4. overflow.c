#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;			// �ִ밪���� �ʱ�ȭ�Ѵ�.
	unsigned short u_money = USHRT_MAX; 	// �ִ밪���� �ʱ�ȭ�Ѵ�.

	s_money = s_money + 1; //�����÷ο찡 �߻�
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1; //�����÷ο찡 �߻�
	printf("u_money = %d\n", u_money);

	return 0;
}