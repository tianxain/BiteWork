#define _CRT_SECURE_NO_WARNINGS 1
#include"RotateChar.h"
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
void rotateChar(char *charArr, int n)
{
	assert(charArr);
	if (!n)
	{
		return;
	}
	else
	{
		int len = strlen(charArr);
		char temp = *charArr;
		for (int i = 1; i < len; i++)
		{
			*(charArr + i - 1) = *(charArr + i);
			//charArr[i - 1] = charArr[i];
		}
		*(charArr + len - 1) = temp;
		//charArr[len-1] = temp;
		return rotateChar(charArr, n-1);
	}
	
}
