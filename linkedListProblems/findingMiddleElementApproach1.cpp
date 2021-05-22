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
    Node *counter = new Node(0);
    int count = 0;

    counter = head;
    while (counter)
    {
        ++count;
        counter = counter->next;
    }

    int mid = count % 2 == 0 ? ceil(count / 2) : (count / 2);

    Node *pos = head;

    while (mid)
    {
        pos = pos->next;
        --mid;
    }
    return pos->data;
}
