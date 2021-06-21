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
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        vector<vector<int>> result;
        vector<int> runningSet;

        if (root == NULL)
        {
            return result;
        }

        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            if (node != NULL)
            {
                runningSet.push_back(node->val);
                cout << node->val << " ";

                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
            }
            else if (!q.empty())
            {
                result.push_back(runningSet);
                runningSet = {};
                q.push(NULL);
            }
        }

        result.push_back(runningSet);

        return result;
    }
};