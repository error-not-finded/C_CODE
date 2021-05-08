#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

ListNode* ListCreate()
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
void ListInit(ListNode* phead)
{
	phead->next = phead;
	phead->prev = phead;
}
void ListDestory(ListNode* phead)
{

}
void ListPrint(ListNode* phead) 
{
	ListNode* cur = phead->next;
	while (cur!=phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void ListPushBack(ListNode* phead, LTDataType x)
{
	ListNode* newnode = ListCreate();
	ListNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
	newnode->data = x;
}
void ListPopBack(ListNode* phead)
{
	assert(phead->next!=phead);
	ListNode* obj = phead->prev;
	ListNode* newend = obj->prev;
	newend->next = phead;
	phead->prev = newend;
	free(obj);
	obj = NULL;
}
void ListPushFront(ListNode* phead, LTDataType x)
{
	ListNode* newnode = ListCreate();
	ListNode* first = phead->next;
	newnode->data = x;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;

}
void ListPopFront(ListNode* phead) {
	assert(phead->next != phead);
	ListNode* first = phead->next;
	ListNode* second = first->next;
	phead->next = second;
	second->prev = phead;
	free(first);
	first = NULL;
}

ListNode* ListFind(ListNode* phead, LTDataType x)//查找功能中实现修改
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* Prev = pos->prev;
	ListNode* newnode = ListCreate();
	newnode->data = x;
	Prev->next = newnode;
	newnode->prev = Prev;
	newnode->next = pos;
	pos->prev = newnode;
}
void ListErase(ListNode* pos)
{
	assert(pos->next !=pos );
	ListNode* Next = pos->next;
	ListNode* Prev = pos->prev;
	Prev->next = Next;
	Next->prev = Prev;
	free(pos);
	pos = NULL;
}