#define _CRT_SECURE_NO_WARNINGS 1
#include"IsCharArrEqual.h"
#include"RotateChar.h"

//判断一个字符串是否为另外一个字符串旋转之后的字符串
int isCharArrEqual(char *charArr1, char *charArr2,int n)
{
	//先翻转字符串中指定个数字符
	assert(charArr2);

	rotateChar(charArr1, n);

	int charArr1_len = strlen(charArr1);
	int charArr2_len = strlen(charArr2);
	if (charArr1_len != charArr2_len)
	{
		return 0;
	}
	while (*charArr1== *charArr2)
	{
		charArr1++;
		charArr2++;

	}
	if (!(*charArr2))
	{
		return 1;
	}
	return 0;
}