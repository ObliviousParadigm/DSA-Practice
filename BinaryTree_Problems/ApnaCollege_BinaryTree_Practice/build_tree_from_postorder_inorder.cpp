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

Node *buildTree(vector<int> postorder, vector<int> inorder, int start, int end)
{
    static int index = postorder.size() - 1;

    if (start > end)
    {
        return NULL;
    }

    int curr = postorder[index];
    index--;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    cout << curr << endl;
    int pos = *find(inorder.begin(), inorder.end(), curr);
    node->right = buildTree(postorder, inorder, pos + 1, end);
    node->left = buildTree(postorder, inorder, start, pos - 1);

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
    vector<int> postorder({4, 2, 5, 3, 1});
    vector<int> inorder({4, 2, 1, 5, 3});

    Node *root = buildTree(postorder, inorder, 0, inorder.size() - 1);

    printInorder(root);

    return 0;
}