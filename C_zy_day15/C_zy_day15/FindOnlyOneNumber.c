#define _CRT_SECURE_NO_WARNINGS 1
#include"FindOnlyOneNUmber.h"

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
void findNumber(int *arr, int *num1,int *num2,int len)
{
	int i = 0;
	int ret = 0;
	int bite;
	*num1 = 0;
	*num2 = 0;
	//循环得到只出现一次的两个数的异或
	for (i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}

	//找到ret二进制为1的一位
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			bite = i;
			break;
		}
	}

	for (i = 0; i < len; i++)
	{
		if ((arr[i] >> bite) & 1 == 1)
		{
			*(num1) ^= arr[i];
		}
	}
	*(num2) = ret ^ *(num1);
}