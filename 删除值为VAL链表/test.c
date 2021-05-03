#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct ListNode 
{
	int val;
	struct ListNode* next;
};
struct ListNode* deleteNode(struct ListNode* head, int val)
{
    if (head->val == val)
    {
        head = head->next;
        return head;
    }
    else
    {
        struct ListNode* tail = head;
        struct ListNode* check = head;
        while (check->val != val)
        {
            tail = check;
            check = check->next;
        }
        tail->next = check->next;
        return head;
    }

}
