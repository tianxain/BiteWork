#define _CRT_SECURE_NO_WARNINGS 1
#include"AdjustArray.h"
#include"Public.h"
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void adjustArray(int *arr, int len)
{
	assert(arr);

	int *start = arr;
	int *end = arr + len - 1;
	int temp;
	while (start < end)
	{
		while ((*start) % 2 == 1)
		{
			start++;
		}
		while (((*end) % 2 == 0))
		{
			end--;
		}
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}