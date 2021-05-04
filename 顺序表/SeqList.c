#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	//ps = (SeqList*)malloc(sizeof(SeqList));
	ps->a =(SLDateType*) malloc(10*sizeof(ps->a));
	ps->size = 0;
	ps->capacity = 10;
}
void SeqListDestory(SeqList* ps)
{
	ps->capacity = 0;
	ps->size = 0;
	free(ps->a);
	ps->a = NULL;
	
}
void SeqListPrint(SeqList* ps)
{
	if (ps == NULL)
	{
		printf("NULL");
	}
	for (int i = 0; i< (ps->size); i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void CapicityCheck(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{

		SLDateType* ptr = (SLDateType)malloc(2 * sizeof(ps->a));
		if (ptr != NULL)
		{
			ps->a = ptr;
			ps->capacity *= 2;
		}
		else
		{
			printf("%s", strerror(errno));
			return;
		}
	}
}
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	CapicityCheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	CapicityCheck(ps);
	int i = 0;
	for(i = ps->size; i >0; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps ->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	/*if (ps->size == 1)
	{
		ps = NULL;
	}*/
	int i = 0;
	for(i=0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
void SeqListPopBack(SeqList* ps)
{
	ps->size--;
}
int SeqListFind(SeqList* ps, SLDateType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListInsert(SeqList* ps, SLDateType val, SLDateType x)
{
	int pos=SeqListFind(ps, val);
	//assert(pos < ps->size);
	CapicityCheck(ps);
	for (int i = ps->size; i >pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(pos < ps->size);
	for (int i = pos; i < ps->size-1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
