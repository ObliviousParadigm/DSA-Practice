#include <bits/stdc++.h>

using namespace std;

/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    // Your code here
    Node *mid = head;
    Node *ahead = head;

    while (ahead != NULL && ahead->next != NULL)
    {
        mid = mid->next;
        ahead = ahead->next->next;
    }
    return mid->data;
}