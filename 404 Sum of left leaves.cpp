/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return 0;
        int res = 0;
        helper(root->left, true, res);
        helper(root->right, false, res);
        return res;
    }
    void helper(TreeNode* node, bool left, int& res){
        if(!node) return;
        if(!node->left && !node ->right && left) res += node->val;
        helper(node->left,true,res);
        helper(node->right,false,res);
    }
};