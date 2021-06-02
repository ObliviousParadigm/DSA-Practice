#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;

        int sum = (temp1->val + temp2->val) % 10;
        int carry = (temp1->val + temp2->val) / 10;

        ListNode *result = new ListNode(sum);
        ListNode *head = result;

        temp1 = temp1->next;
        temp2 = temp2->next;

        while (temp1 != NULL || temp2 != NULL)
        {
            if (temp1 != NULL && temp2 != NULL)
            {
                sum = (temp1->val + temp2->val + carry) % 10;
                carry = (temp1->val + temp2->val + carry) / 10;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else if (temp1 != NULL && temp2 == NULL)
            {
                sum = (temp1->val + carry) % 10;
                carry = (temp1->val + carry) / 10;
                temp1 = temp1->next;
            }
            else if (temp1 == NULL && temp2 != NULL)
            {
                sum = (temp2->val + carry) % 10;
                carry = (temp2->val + carry) / 10;
                temp2 = temp2->next;
            }

            ListNode *a = new ListNode(sum);
            result->next = a;
            result = result->next;
        }

        if (carry != 0)
        {
            ListNode *a = new ListNode(carry);
            result->next = a;
            result = result->next;
        }
        return head;
    }
};