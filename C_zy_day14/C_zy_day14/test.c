#define _CRT_SECURE_NO_WARNINGS 1
#include"RotateChar.h"

#if 0
//��ת�ַ�����ָ�������ַ�
int main()
{
	char charArr[] = "AABBCCDD";
	int n;
	printf("������Ҫ��ת�ַ��ĸ�����");
	scanf("%d",&n);
	printf("��תǰ��%s\n", charArr);
	rotateChar(charArr,n);
	printf("��ת��%s", charArr);
	return 0;
}
#endif

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
int main()
{
	char charArr1[] = "AABBCCDD";
	char *charArr2 = "BBCCDDAA";
	int n=0;
	int ret = 0;
	printf("������Ҫ��ת�ַ��ĸ�����");
	scanf("%d", &n);
	ret=isCharArrEqual(charArr1, charArr2,n);
	if (ret)
	{
		printf("���");
	}
	else
	{
		printf("�����");
	}
	return 0;
}