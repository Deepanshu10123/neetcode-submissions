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

class Solution {
public:
    int m = 0;

    int helper(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }

        int left = helper(root->left);
        int right = helper(root->right);

        int dia = left + right;
        m = max(m, dia);

        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }

        helper(root);

        return m;
    }
};