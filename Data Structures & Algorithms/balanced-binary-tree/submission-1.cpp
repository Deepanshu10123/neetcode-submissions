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
int helper(TreeNode * root)
{
    if(root==nullptr){
        return 0 ;
    }
    int right = helper(root->right);
    int left = helper(root->left);
    return max(left,right)+1;
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        int left = helper(root->left);
        int right = helper(root->right);
        if(abs(left - right) <=1){
            return true;
        }
        isBalanced(root->left);
        isBalanced(root->right);
        return false;
    }
};
