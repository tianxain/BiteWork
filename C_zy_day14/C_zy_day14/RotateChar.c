#define _CRT_SECURE_NO_WARNINGS 1
#include"RotateChar.h"
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//void rotateChar(char *charArr, int n)
//{
//	assert(charArr);
//	if (!n)
//	{
//		return;
//	}
//	else
//	{
//		////1.�ݹ�
//		//int len = strlen(charArr);
//		//char temp = *charArr;
//		//
//		//for (int i = 1; i < len; i++)
//		//{
//		//	*(charArr + i - 1) = *(charArr + i);
//		//	//charArr[i - 1] = charArr[i];
//		//}
//		//*(charArr + len - 1) = temp;
//		////charArr[len-1] = temp;
//		//return rotateChar(charArr, n-1);
//
//		//2.�����ת
//		while (n--)
//		{
//			
//			char temp = *charArr;
//			char *cur = charArr;
//			while (*(cur + 1) != '\0')
//			{
//				*cur = *(cur+1);
//				++cur;
//			}		
//			*cur = temp;
//		}
//
//		//3.�ֶ����� n �� k-n  [0,k-1][k,len-1]
//		int len = strlen(charArr);
//	}
//}

void rotateChar(char *charArr, int n)
{
	assert(charArr);
	if (!n)
	{
		return;
	}
	else
	{
		//3.�ֶ����� n �� k-n  [0,k-1][k,len-1]
		int len = strlen(charArr);
		reverse_str(charArr, charArr +n-1);
		reverse_str(charArr+n, charArr +len - 1);
		reverse_str(charArr, charArr+len-1);
	}
}

void reverse_str(char* left,char* right)
{
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}