#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 10; //10���� 10
	int y = 010; //8�����μ� 10������ ��ȯ�ϸ� 8
	int z = 0x10; //16�����μ� 10������ ��ȯ�ϸ� 16


	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}