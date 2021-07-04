#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumReplace(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    sumReplace(root->left);
    sumReplace(root->right);

    if (root->left)
    {
        root->data += root->left->data;
    }
    if (root->right)
    {
        root->data += root->right->data;
    }
}

void printPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printPreorder(root);
    cout << endl;
    sumReplace(root);
    printPreorder(root);
    cout << endl;

    return 0;
}