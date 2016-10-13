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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        helper(res, 0, root);
        return vector<vector<int>>(res.rbegin(),res.rend());
    }
    void helper(vector<vector<int>>&res, int level, TreeNode* root){
        if(!root) return;
        if(res.size() == level) res.push_back({});
        res[level].push_back(root->val);
        if(root->left) helper (res, level+1, root->left);
        if(root->right) helper (res, level+1, root->right);
    }
};