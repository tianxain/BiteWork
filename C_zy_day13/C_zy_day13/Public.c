#define _CRT_SECURE_NO_WARNINGS 1
#include"Public.h"

//����������
void exchangeNum(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//��ӡһά����
void Print_1(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

//��ӡһά����
void Print_2(int **p, int row,int col)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ",*((p+i)+j));
		}
		printf("\n");
	}
}