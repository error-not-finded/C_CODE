#define _CRT_SECURE_NO_WARNINGS 1
#include"SListNode.h"

//void test3(void)
//{
//	SListNode* phead = NULL;
//
//	SListPushBack(&phead, 1);
//	SListPushBack(&phead, 2);
//	SListPushBack(&phead, 3);
//	SListPushBack(&phead, 4);
//	SListPushBack(&phead, 5);
//	SListPrint(phead);
//
//	SListPushFront(&phead, 6);
//	SListPushFront(&phead, 7);
//	SListPrint(phead);
///*	SListPopBack(&phead);
//	SListPopBack(&phead);
//	SListPopBack(&phead);
//	SListPopBack(&phead);
//	SListPopBack(&phead);
//	SListPopBack(&phead);
//	SListPopBack(&phead);
//	*///SListPopBack(&phead);
//	SListPopFront(&phead);
//	SListNode* pos=SListFind(phead, 3);
//	SListInsert(&phead, pos, 8);
//	pos = SListFind(phead, 8);
//
//	SListInsert(&phead, pos, 9);
//	pos = SListFind(phead, 9);
//
//	//SListInsert(&phead, pos, 10);
//	SListErase(&phead, pos);
//
//	SListPrint(phead);
//
//
//
//}
void menu()
{
	printf("1.头插 2.尾插 3.头删 4.尾删 5.中间插入 6.中间删除");
	printf("7.打印 8.查找 0.退出 ");

}

int main()
{
	int input = 0;
	SListNode* phead = NULL;
	menu();
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		}

	} while ();

	return 0;
}