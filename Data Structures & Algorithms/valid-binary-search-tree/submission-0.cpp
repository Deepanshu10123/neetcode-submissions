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
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)
        {
            return true;
        }
        if(root->left == nullptr && root->right ==nullptr)
        {return true;}
        // bool ans = false;
        bool left = true;
        bool right = true;
        if(root->right!=nullptr && root->right->val > root->val)
        {
            right = (true && isValidBST(root->right));
        }
        else{
            right = false;
        }
        if(root->left!=nullptr && root->left->val < root->val)
        {
            left = (true && isValidBST(root->left));
        }
        else{
            left = false;
        }
        if(left && right)
        return true;
        else
        return false;
    }
};
