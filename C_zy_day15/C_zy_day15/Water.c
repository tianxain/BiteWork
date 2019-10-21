#define _CRT_SECURE_NO_WARNINGS 1
#include"Water.h"

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
int count(int money)
{
	int total=money;//总的个数
	int emptyBottle=money;//空瓶子个数
	int newBottle=money;//新换的个数
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