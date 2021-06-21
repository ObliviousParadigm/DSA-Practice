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
    void traverseTree(vector<int> &result, TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        traverseTree(result, root->left);
        result.push_back(root->val);
        traverseTree(result, root->right);

        return;
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;

        traverseTree(result, root);

        return result;
    }
};