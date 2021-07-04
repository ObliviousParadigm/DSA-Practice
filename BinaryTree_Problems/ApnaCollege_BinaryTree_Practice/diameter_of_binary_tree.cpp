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

int height(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }

    int left_height = height(root->left, ans);
    int right_height = height(root->right, ans);

    ans = max(ans, left_height + right_height + 1);

    return 1 + max(left_height, right_height);
}

int diameter(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    int ans = INT_MIN;
    height(root, ans);

    return ans;
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

    cout << diameter(root) << endl;

    return 0;
}