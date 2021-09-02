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
    ListNode *reverse(ListNode *head, int k, int n)
    {
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        int count = 0;

        while (current != NULL && count < k)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count += 1;
        }

        if (next != NULL && n - k >= k)
        {
            head->next = reverse(next, k, n - k);
        }
        else
        {
            head->next = next;
        }

        return prev;
    }

    ListNode *reverseKGroup(ListNode *head, int k)
    {
        int count = 0;
        ListNode *temp = head;

        while (temp != NULL)
        {
            temp = temp->next;
            count += 1;
        }

        head = reverse(head, k, count);

        return head;
    }
};