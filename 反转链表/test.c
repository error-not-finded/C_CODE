#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* prev = NULL;//��ǰ�ڵ�ǰ�Ľڵ��ָ��
    struct ListNode* tail = head;//��ǰ�ڵ�
    struct ListNode* Next = NULL;//��ǰ�ڵ���һ������ָ��
    while (tail != NULL) {//����ֻ����tail������ָ�����ֶ�NULL�����õĴ���
        Next = tail->next;//�ȱ�����һ���ڵ�ָ��
        tail->next = prev;//����ǰ�ڵ��nextָ����һ���ڵ�
        prev = tail;//��������
        tail = Next;//

    }
    return prev;

}