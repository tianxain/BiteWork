#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

// 基本增删查改接口
// 顺序表初始化
void SeqListInit(SeqList* psl, size_t capacity)
{
	assert(psl);
	psl->_capicity = capacity;
	psl->_size = 0;
	psl->_array = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
}
// 顺序表销毁
void SeqListDestory(SeqList* psl)
{
	assert(psl);
	psl->_size = 0;
	psl->_capicity = 0;
	free(psl->_array);
}
// 顺序表打印
void SeqListPrint(SeqList* psl)
{
	assert(psl);
	for (size_t i = 0; i < psl->_size; i++)
	{
		printf("%d  ",psl->_array[i]);
	}
	printf("\n");
}
// 检查空间，如果满了，进行增容
void CheckCapacity(SeqList* psl)
{
	assert(psl);

	if (psl->_size ==psl->_capicity)
	{
		size_t newCapicity = psl->_capicity == 0 ? 4 : psl->_capicity * 2;
		psl->_array = realloc(psl->_array,newCapicity*sizeof(SLDataType));
		psl->_capicity = newCapicity;
	}
}
// 顺序表尾插
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	psl->_array[psl->_size] = x;
	psl->_size++;
}
// 顺序表尾删
void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	if (psl->_size > 0)
	{
		psl->_size--;
	}
}
// 顺序表头插
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);

	int end = psl->_size - 1;
	for (; end >= 0; end--)
	{
		psl->_array[end + 1] = psl->_array[end];
	}
	psl->_array[0] = x;
	psl->_size++;
}
// 顺序表头删
void SeqListPopFront(SeqList* psl)
{
	assert(psl);
	if (psl->_size > 0)
	{
		if (psl->_size == 1)
		{
			psl->_size = 0;
		}
		else
		{
			for (size_t i = 0; i < psl->_size-1; i++)
			{
				psl->_array[i] = psl->_array[i + 1];
			}
			psl->_size--;
		}
	}
}
// 顺序表查找
int SeqListFind(SeqList* psl, SLDataType x)
{
	assert(psl);
	for (size_t i = 0; i < psl->_size; i++)
	{
		if (psl->_array[i] == x)
		{
			return i;
		}
	}
	return -1;
}
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl);
	if (psl->_size <= pos)
	{
		printf("输入错误！\n");
		return;
	}
	else
	{
		CheckCapacity(psl);
		size_t end = psl->_size;
		while (end > pos)
		{
			psl->_array[end] = psl->_array[end-1];
			end--;
		}
		psl->_array[pos] = x;
		psl->_size++;
	}
}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl);
	if (psl->_size <= pos)
	{
		printf("输入错误！\n");
		return;
	}
	else
	{
		size_t end = psl->_size - 1;
		while (pos < end)
		{
			psl->_array[pos] = psl->_array[end + 1];
			pos++;
		}
		psl->_size--;
	}
}
