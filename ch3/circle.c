#define _CRT_SECURE_NO_WARNINGS
/* ���� ������ ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	float radius;	// ���� ������
	float area;	// ����

	printf("�������� �Է��Ͻÿ�: ");
	scanf_s("%f", &radius);

	area = 3.14 * radius * radius;

	printf("���� ����: %f\n", area);

	return 0;
}
