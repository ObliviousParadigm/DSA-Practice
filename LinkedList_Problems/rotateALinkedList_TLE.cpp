#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    //Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        if (head == NULL)
        {
            return NULL;
        }

        for (int i = 0; i < k; ++i)
        {
            Node *prev = NULL;
            Node *curr = head;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
                int temp = curr->data;
                curr->data = prev->data;
                prev->data = temp;
            }
        }
        return head;
    }
};