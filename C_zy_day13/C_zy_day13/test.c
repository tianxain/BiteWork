#define _CRT_SECURE_NO_WARNINGS 1
#include"AdjustArray.h"
#include"YoungTableau.h"
#include"Public.h"
int main()
{
	int arr[] = { 5,9,7,8,4,8,3,1,8,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	adjustArray(arr, len);
	Print_1(arr, len);
	return 0;
}

#if 0
//调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分
int main()
{
	int arr[] = {5,9,7,8,4,8,3,1,8,1};
	int len = sizeof(arr) / sizeof(arr[0]);
	adjustArray(arr,len);
	Print_1(arr, len);
	return 0;
}
#endif

#if 0
//杨氏矩阵查找
int main()
{
	int arr[4][4] = { 1,3,5,7,2,4,6,8,3,6,9,12,4,7,10,13 };
	int num = 0, ret = 0;
	printf("请输入你要查找的数：");
	scanf("%d", &num);
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	ret = YoungTableauFind(arr, row, col, num);
	if (ret == 1)
	{
		printf("数组中存在这个数！");
	}
	else
	{
		printf("数组中不存在这个数！");
	}

	return 0;
}
#endif


