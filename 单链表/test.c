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
	printf("1.ͷ�� 2.β�� 3.ͷɾ 4.βɾ 5.�м���� 6.�м�ɾ��");
	printf("7.��ӡ 8.���� 0.�˳� ");

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