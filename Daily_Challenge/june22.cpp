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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {

        vector<int> nums;

        if (left == right)
        {
            return head;
        }

        ListNode *node = head;

        for (int i = 0; i < left - 1; ++i)
        {
            node = node->next;
        }

        cout << node->val << endl;

        for (int i = left - 1; i < right; ++i)
        {
            nums.push_back(node->val);
            node = node->next;
        }

        node = head;

        for (int i = 0; i < left - 1; ++i)
        {
            node = node->next;
        }

        for (auto i = nums.rbegin(); i != nums.rend(); ++i)
        {
            node->val = *i;
            node = node->next;
        }

        return head;
    }
};