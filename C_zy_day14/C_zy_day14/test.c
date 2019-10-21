#define _CRT_SECURE_NO_WARNINGS 1
#include"RotateChar.h"

#if 0
//翻转字符串中指定个数字符
int main()
{
	char charArr[] = "AABBCCDD";
	int n;
	printf("请输入要翻转字符的个数：");
	scanf("%d",&n);
	printf("翻转前：%s\n", charArr);
	rotateChar(charArr,n);
	printf("翻转后：%s", charArr);
	return 0;
}
#endif

//判断一个字符串是否为另外一个字符串旋转之后的字符串
int main()
{
	char charArr1[] = "AABBCCDD";
	char *charArr2 = "BBCCDDAA";
	int n=0;
	int ret = 0;
	printf("请输入要翻转字符的个数：");
	scanf("%d", &n);
	ret=isCharArrEqual(charArr1, charArr2,n);
	if (ret)
	{
		printf("相等");
	}
	else
	{
		printf("不相等");
	}
	return 0;
}