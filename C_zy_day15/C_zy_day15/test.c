#define _CRT_SECURE_NO_WARNINGS 1
#include"FindOnlyOneNUmber.h"
#include"Water.h"
#include"my_strcpy.h"
#include"my_strcpy.h"
#if 0
//�ҳ�������ֻ����һ�ε�����
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
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
int main()
{
	int money;
	printf("��������������ˮ�Ľ�");
	scanf("%d", &money);
	int total = count(money);
	printf("���ܹ����Ժ�%dƿˮ��\n",total);
	return 0;
}
#endif

#if 0
//ģ��ʵ��strcpy
int main()
{
	char *str1 = "hello world!";
	char str2[20] = {' '};
	my_strcpy(str2,str1);
	printf("%s\n",str2);
	return 0;
}
#endif

//ģ��ʵ��strcat
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
