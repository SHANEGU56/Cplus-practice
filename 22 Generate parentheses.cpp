class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        DFS(res, n ,n, "");
        return res;
    }
    void DFS(vector<string> &res, int left, int right, string out){
        if(left > right) return;
        if(left == 0 && right == 0) res.push_back(out);
        else{
            if(left > 0) DFS(res,left-1,right,out+'(');
            if(right > 0) DFS(res, left, right-1, out+')');
        }
    }
};