#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void preOrder(vector<int> &tree, TreeNode *root)
    {
        if (root == NULL)
        {
            tree.push_back(NULL);
            return;
        }

        tree.push_back(root->val);
        preOrder(tree, root->left);
        preOrder(tree, root->right);

        return;
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> first, second;

        preOrder(first, p);
        preOrder(second, q);

        if (first == second)
        {
            return true;
        }
        return false;
    }
};