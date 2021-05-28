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
    int getDecimalValue(ListNode *head)
    {
        ListNode *count = head;
        ListNode *traverse = head;
        int n = 0;
        int result = 0;

        while (count->next != NULL)
        {
            count = count->next;
            n += 1;
        }

        while (n >= 0)
        {
            if (traverse->val)
            {
                result += pow(2, n);
            }
            --n;
            traverse = traverse->next;
        }
        return result;
    }
};