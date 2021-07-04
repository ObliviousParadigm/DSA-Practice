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
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return max(height(root->left), height(root->right)) + 1;
    }

    int diameter(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lheight = height(root->left);
        int rheight = height(root->right);

        int ldiameter = diameter(root->left);
        int rdiameter = diameter(root->right);

        return max(lheight + rheight + 1, max(ldiameter, rdiameter));
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        int ans = diameter(root) - 1;
        return ans;
    }
};