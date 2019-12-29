#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

// ������ɾ��Ľӿ�
// ˳����ʼ��
void SeqListInit(SeqList* psl, size_t capacity)
{
	assert(psl);
	psl->_capicity = capacity;
	psl->_size = 0;
	psl->_array = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
}
// ˳�������
void SeqListDestory(SeqList* psl)
{
	assert(psl);
	psl->_size = 0;
	psl->_capicity = 0;
	free(psl->_array);
}
// ˳����ӡ
void SeqListPrint(SeqList* psl)
{
	assert(psl);
	for (size_t i = 0; i < psl->_size; i++)
	{
		printf("%d  ",psl->_array[i]);
	}
	printf("\n");
}
// ���ռ䣬������ˣ���������
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
// ˳���β��
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	psl->_array[psl->_size] = x;
	psl->_size++;
}
// ˳���βɾ
void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	if (psl->_size > 0)
	{
		psl->_size--;
	}
}
// ˳���ͷ��
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
// ˳���ͷɾ
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
// ˳������
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
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl);
	if (psl->_size <= pos)
	{
		printf("�������\n");
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
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl);
	if (psl->_size <= pos)
	{
		printf("�������\n");
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
