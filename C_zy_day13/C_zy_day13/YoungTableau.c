#define _CRT_SECURE_NO_WARNINGS 1
#include"YoungTableau.h"

//���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
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