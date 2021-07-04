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
    ListNode *revList(ListNode *node)
    {
        ListNode *prev = node;
        ListNode *curr = node;
        ListNode *temp = node->next;

        prev->next = NULL;

        while (temp != NULL)
        {
            curr = temp;

            temp = temp->next;
            curr->next = prev;
            prev = curr;
        }

        return curr;
    }

    bool isPalindrome(ListNode *head)
    {
        if (head->next == NULL)
        {
            return head;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Slow is not pointing to the middle element

        ListNode *revStart = slow->next;
        ListNode *mid = revList(revStart);

        slow->next = mid;

        ListNode *node = head;

        while (mid != NULL)
        {
            if (node->val != mid->val)
                return false;
            mid = mid->next;
            node = node->next;
        }
        return true;
    }
};