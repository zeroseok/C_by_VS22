#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TAX_RATE  0.2 //define�� �̿��� ��ȣ ��� ����

int main(void)
{
	const int MONTHS = 12; //const�� �̿��� ��ȣ ��� ����
	int m_salary, y_salary;	// ���� ����

	printf("������ �Է��Ͻÿ�: ");	// �Է� �ȳ���
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;	// ������ ���
	printf("������ %d�Դϴ�.\n", y_salary);
	printf("������ %f�Դϴ�.\n", y_salary * TAX_RATE);

	return 0;
}