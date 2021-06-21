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
    void postorder(vector<int> &result, TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        postorder(result, root->left);
        postorder(result, root->right);
        result.push_back(root->val);

        return;
    }

    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> result;

        postorder(result, root);

        return result;
    }
};