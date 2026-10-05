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
    int i =0;
    TreeNode * helper(int s, int e,vector<int>& preorder, vector<int>& inorder ){
        if(s>e){
            return nullptr;
        }
        int d = preorder[i];
        TreeNode* root = new TreeNode(d);
        i++;
        int k = -1;
        for(int j = s; j<=e; j++)
        {
            if(inorder[j]==d)
            {
                k = j;
                break;
            }
        }
        root->left = helper(s,k-1, preorder,inorder);
        root->right = helper(k+1,e, preorder, inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        TreeNode * root = helper(0,n-1, preorder,inorder);
        return root;
    }
};
