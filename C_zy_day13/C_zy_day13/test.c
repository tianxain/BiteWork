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
//���������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��
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
//���Ͼ������
int main()
{
	int arr[4][4] = { 1,3,5,7,2,4,6,8,3,6,9,12,4,7,10,13 };
	int num = 0, ret = 0;
	printf("��������Ҫ���ҵ�����");
	scanf("%d", &num);
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	ret = YoungTableauFind(arr, row, col, num);
	if (ret == 1)
	{
		printf("�����д����������");
	}
	else
	{
		printf("�����в������������");
	}

	return 0;
}
#endif


