#define _CRT_SECURE_NO_WARNINGS 1
#include"IsCharArrEqual.h"
#include"RotateChar.h"

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
int isCharArrEqual(char *charArr1, char *charArr2,int n)
{
	//�ȷ�ת�ַ�����ָ�������ַ�
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