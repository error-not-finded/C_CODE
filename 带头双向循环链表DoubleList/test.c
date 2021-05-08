#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"




void test(void) 
{
	ListNode* phead =ListCreate(); 
	ListInit(phead);
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPrint(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPrint(phead);

	ListPushFront(phead, 0);
	ListPushFront(phead, -1);
	//ListPopFront(phead);
	//ListPopFront(phead);
	//ListPopFront(phead);
	//ListPopFront(phead);
	ListNode*pos=ListFind(phead, 3);
	ListInsert(pos, 30);
	ListPrint(phead);
	//printf("%d", *pos);
	ListErase(pos);
	ListPrint(phead);

}
int main()
{
	test();
	return 0;
}