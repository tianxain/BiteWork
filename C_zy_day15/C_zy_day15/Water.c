#define _CRT_SECURE_NO_WARNINGS 1
#include"Water.h"

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
int count(int money)
{
	int total=money;//�ܵĸ���
	int emptyBottle=money;//��ƿ�Ӹ���
	int newBottle=money;//�»��ĸ���
	while (emptyBottle >= 2)
	{
		newBottle = emptyBottle / 2;
		total = total + newBottle;
		if (emptyBottle % 2 == 0)
		{
			emptyBottle = emptyBottle / 2;
		}
		else
		{
			emptyBottle = (emptyBottle / 2)+1;
		}
	}
	return total;
}