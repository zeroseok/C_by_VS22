#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double light_speed = 300000; 	// ���� �ӵ��� �����ϴ� ����(300000km/sec)
	double distance = 149600000;	// �¾�� ���� ���� �Ÿ��� �����ϴ� ����
	// 149600000km�� �ʱ�ȭ�Ѵ�. 
	double time;			// �ð��� ��Ÿ���� ����

	time = distance / light_speed;	// �Ÿ��� ���� �ӵ��� ������. 
	time = time / 60.0;		// �ʸ� ������ ��ȯ�Ѵ�. 

	printf("���� �ӵ��� %lfkm/s \n", light_speed);
	printf("�¾�� �������� �Ÿ� %lfkm \n", distance);
	printf("���� �ð��� %lf��\n", time);	// �ð��� ����Ѵ�. 
	return 0;
}