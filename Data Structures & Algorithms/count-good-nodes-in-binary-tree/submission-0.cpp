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
    int helper(TreeNode* root, int maxx)
    {
        int count  = 0 ;
        if(root==nullptr)
        {
            return 0;
        }
        if(root->val>=maxx)
        {
            maxx = root->val;
            count =1;
        }
        
        int countLeft = helper(root->left,maxx);
        int countRight = helper(root->right,maxx);
        return countLeft + countRight + count ;
    }
    int goodNodes(TreeNode* root) {
        int maxx = INT_MIN ;
        return helper(root, maxx);
    }
};
