#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *CreateNode(int data)
{
    Node *newNode = new Node();

    if (!newNode)
    {
        cout << "Memory error" << endl;
        return NULL;
    }

    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *InsertNode(Node *root, int data)
{
    if (root == NULL)
    {
        root = CreateNode(data);
        return root;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node->left != NULL)
        {
            q.push(node->left);
        }
        else
        {
            node->left = CreateNode(data);
            return root;
        }

        if (node->right != NULL)
        {
            q.push(node->right);
        }
        else
        {
            node->right = CreateNode(data);
            return root;
        }
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);

    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;

    int key = 12;
    InsertNode(root, 12);

    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
}