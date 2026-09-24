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
    void dfs(TreeNode* node, int depth, vector<vector<int>>& result) {
            // Step 1: if node is null, stop
            if(node==nullptr)
            {
                return;
            }
            // Step 2: if this level doesn't exist yet, create it
            if (depth == result.size()) {
                result.push_back({});
            }

            // Step 3: add this node's value to its level
            result[depth].push_back(node->val);

            // Step 4: go left, then right, one level deeper
            dfs(node->left, depth+1,result);
            dfs(node->right, depth+1,result);
        }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        dfs(root, 0, result);   // start at the root, depth 0
        return result;
    }
};
