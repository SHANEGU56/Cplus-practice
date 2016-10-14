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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        helper(root, res, 0);
        return res;
    }
    void helper(TreeNode* root, vector<vector<int>>& res, int level){
        if(!root) return;
        if(level == res.size()) res.push_back({});
        res[level].push_back(root->val);
        if(root->left) helper(root->left, res, level+1);
        if(root->right) helper(root->right, res, level+1);
        
    }
};