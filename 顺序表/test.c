#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//void menu(void)
//{
//	printf("***************************************");
//	printf("****1.β��**2.ͷ��**3.ͷɾ**4.βɾ*****");
//	printf("****5.����**6.�м����**7.�м�ɾ��*****");
//	printf("**********8.��ʾ    0.�˳�*************");
//
//}
int main()
{
	//int input = 0;
	//SeqList*ps;
	//SeqListInit(ps);

	//menu();
	//do
	//{
	//	printf("ѡ����");
	//	scanf("%d", &input);
	//	switch (input)
	//	{
	//	case 1:SeqListPrint(ps);
	//		break;
	//	case 2:SeqListPushBack(ps,scanf("%d"));
	//		break;
	//	case 3:SeqListPushFront(ps, scanf("%d"));
	//		break;
	//	case 4:SeqListPopFront(ps);
	//		break;
	//	case 5:SeqListPopBack(ps);
	//		break;
	//	case 6:SeqListFind( ps, scanf("%d"));
	//		break;
	//	case 7: SeqListInsert( ps, scanf("%d"), scanf("%d"));

	//		break;
	//	case 8:SeqListErase(ps, scanf("%d"));

	//		break;
	//	case 0:SeqListDestory(ps);
	//		break;
	//	}
	//	
	//} 	while (input);
	SeqList seqlist = {0};
	SeqListInit(&seqlist);
	SeqListDestory(&seqlist);
	SeqListPushBack(&seqlist, 1);
	SeqListPushBack(&seqlist, 2);
	SeqListPushFront(&seqlist, 3);
	SeqListPushFront(&seqlist, 4);
	//SeqListInsert(&seqlist,2, 5);
	//int c=SeqListFind(&seqlist, 2);

	SeqListErase(&seqlist, 0);

	SeqListPrint(&seqlist);
	//printf("%d", c);
	return 0;
}