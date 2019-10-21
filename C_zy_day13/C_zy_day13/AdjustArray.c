#define _CRT_SECURE_NO_WARNINGS 1
#include"AdjustArray.h"
#include"Public.h"
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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