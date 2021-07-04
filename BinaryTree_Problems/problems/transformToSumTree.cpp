#include <bits/stdc++.h>

using namespace std;

//User function template for C++

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution
{
public:
    int sumUtil(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        int d = node->data;

        node->data = sumUtil(node->left) + sumUtil(node->right);

        return d + node->data;
    }

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        sumUtil(node);
    }
};