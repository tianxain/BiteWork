#define _CRT_SECURE_NO_WARNINGS 1
#include"RotateChar.h"
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
