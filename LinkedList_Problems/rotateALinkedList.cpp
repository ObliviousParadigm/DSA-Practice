#include <bits/stdc++.h>

using namespace std;

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    //Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        // Your code here
        Node *req_pos = head;
        Node *before_req = head;
        Node *beg = head;
        Node *count = head;

        int n = 0;

        while (count->next != NULL)
        {
            n += 1;
            count = count->next;
        }

        if (k == (n + 1))
        {
            return head;
        }

        for (int i = 0; i < k - 1; ++i)
        {
            req_pos = req_pos->next;
            before_req = before_req->next;
        }

        req_pos = req_pos->next;
        before_req->next = NULL;
        count->next = beg;

        head = req_pos;
    }
};