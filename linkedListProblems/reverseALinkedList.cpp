#include <bits/stdc++.h>

using namespace std;

/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
public:
    //Function to reverse a linked list.
    struct Node *reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *p1 = head;
        Node *p2 = head;
        Node *temp = head->next;

        p2->next = NULL;

        while (temp != NULL)
        {
            p1 = temp;

            temp = p1->next;
            p1->next = p2;
            p2 = p1;
        }
    }
};