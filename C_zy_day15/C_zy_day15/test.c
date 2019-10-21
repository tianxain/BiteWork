#define _CRT_SECURE_NO_WARNINGS 1
#include"FindOnlyOneNUmber.h"
#include"Water.h"
#include"my_strcpy.h"
#include"my_strcpy.h"
#if 0
//找出这两个只出现一次的数字
int main()
{
	int arr[] = { 1,1,2,2,3,4,4,5,5,6};
	int num1, num2;
	int len = sizeof(arr) / sizeof(arr[0]);
	findNumber(arr,&num1,&num2,len);
	printf("num1=%d,num2=%d\n", num1, num2);
	return 0;
}
#endif


#if 0
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
int main()
{
	int money;
	printf("请输入您用来买水的金额：");
	scanf("%d", &money);
	int total = count(money);
	printf("您总共可以喝%d瓶水。\n",total);
	return 0;
}
#endif

#if 0
//模拟实现strcpy
int main()
{
	char *str1 = "hello world!";
	char str2[20] = {' '};
	my_strcpy(str2,str1);
	printf("%s\n",str2);
	return 0;
}
#endif

//模拟实现strcat
int main()
{
	char p1[20];
	char* p2 = "hello";
	char* p3 = "world";
	strcpy(p1, p2);
	my_strcat(p1, p3);
	printf("%s\n", p1);
	return 0;
}
