#define _CRT_SECURE_NO_WARNINGS 1
#include"YoungTableau.h"

//杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
int YoungTableauFind(int **arr, int row, int col,int num)
{
	int i = 0;
	int j = col - 1;
	while (i < row&&col >= 0)
	{
		if (*((arr+i)+j) == num)
			return 1;
		else if (*((arr + i) + j) > num)
		{
			--j;
		}
		else
		{
			++i;
		}
	}
	return 0;
}