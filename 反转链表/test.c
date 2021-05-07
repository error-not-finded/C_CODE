#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* prev = NULL;//当前节点前的节点的指针
    struct ListNode* tail = head;//当前节点
    struct ListNode* Next = NULL;//当前节点下一个结点的指针
    while (tail != NULL) {//这里只能用tail，其他指针会出现对NULL解引用的错误
        Next = tail->next;//先保存下一个节点指针
        tail->next = prev;//将当前节点的next指向上一个节点
        prev = tail;//迭代过程
        tail = Next;//

    }
    return prev;

}