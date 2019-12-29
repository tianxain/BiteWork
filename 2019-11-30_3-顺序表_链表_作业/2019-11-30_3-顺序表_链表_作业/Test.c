#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void Test()
{
	SeqList SL;
	SeqListInit(&SL,4);
	SeqListPushBack(&SL,0);
	SeqListPushBack(&SL,1);
	SeqListPushBack(&SL,2);
	SeqListPushBack(&SL,3);
	SeqListPushBack(&SL,4);
	SeqListPrint(&SL);

	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPrint(&SL);

	SeqListPushFront(&SL, 3);
	SeqListPushFront(&SL, 4);
	SeqListPrint(&SL);

	SeqListPopFront(&SL, 3);
	SeqListPopFront(&SL, 4);
	SeqListPrint(&SL);
	
	int ret = SeqListFind(&SL,2);
	printf("%d\n",ret);

	SeqListInsert(&SL,2,3);
	SeqListPrint(&SL);
	
	SeqListErase(&SL,2);
	SeqListPrint(&SL);
}

int main()
{
	Test();
	return 0;
}