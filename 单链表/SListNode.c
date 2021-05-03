#define _CRT_SECURE_NO_WARNINGS 1
#include"SListNode.h"

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	
	if (*pplist == NULL)
	{
		*pplist = BuySListNode(x);
					return;
	}
	SListNode* tail = *pplist;	
	while ((tail)->next != NULL)
	{
		tail = (tail)->next;
	}

	(tail)->next = BuySListNode(x);
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode*tail= BuySListNode(x);
	tail->next = *pplist;
	*pplist = tail;
}

void SListPopBack(SListNode** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else if((*pplist)->next==NULL)
	{
		*pplist = NULL;
	}
	else
	{
		SListNode* tail = *pplist;
		SListNode* pos = *pplist;

		while (tail->next != NULL)
		{
			pos = tail;
			tail = tail->next;
		}
		pos->next = NULL;

	}
}
void SListPopFront(SListNode** pplist)
{
	if ((*pplist) == NULL)
	{
		return;
	}
	*pplist=(*pplist)->next;
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	//SListNode* tail = plist;
	while (plist!=NULL)
	{
		if (plist->data == x)
		{
			return plist;
		}
		plist = plist->next;
	}
	return NULL;
}
void SListInsert(SListNode** pplist, SListNode* pos, SLTDateType x)
{
	//pos = SListFind(*pplist,x);
	SListNode* tail = *pplist;
	while (tail->next != pos)
	{
		tail = tail->next;
	}
	tail->next = BuySListNode(x);
	(tail->next)->next = pos;
}

void SListErase(SListNode** pplist, SListNode* pos)
{
	SListNode* tail = *pplist;
	while (tail->next != pos)
	{
		tail = tail->next;
	}
	tail->next = pos->next;
}



