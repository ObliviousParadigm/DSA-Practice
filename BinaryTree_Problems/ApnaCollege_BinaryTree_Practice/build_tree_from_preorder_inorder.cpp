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

Node *buildTree(vector<int> preorder, vector<int> inorder, int start, int end)
{
    static int index = 0;

    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[index];
    Node *node = new Node(curr);
    ++index;

    if (start == end)
    {
        return node;
    }

    int pos = *find(inorder.begin(), inorder.end(), curr);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

void printInorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main()
{
    vector<int> preorder({1, 2, 3, 4, 5});
    vector<int> inorder({4, 2, 1, 5, 3});

    Node *root = buildTree(preorder, inorder, 0, inorder.size() - 1);

    printInorder(root);

    return 0;
}