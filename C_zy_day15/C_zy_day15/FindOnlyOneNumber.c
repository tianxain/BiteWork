#define _CRT_SECURE_NO_WARNINGS 1
#include"FindOnlyOneNUmber.h"

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
void findNumber(int *arr, int *num1,int *num2,int len)
{
	int i = 0;
	int ret = 0;
	int bite;
	*num1 = 0;
	*num2 = 0;
	//ѭ���õ�ֻ����һ�ε������������
	for (i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}

	//�ҵ�ret������Ϊ1��һλ
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