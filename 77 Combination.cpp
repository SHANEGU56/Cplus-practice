class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> out;
        DFS(res,out,n,k,1);
        return res;
    }
    void DFS(vector<vector<int>>&res, vector<int>& out, int n, int k, int level){
        if(out.size() == k) res.push_back(out);
        else{
            for(int i = level; i <= n; ++i){
                out.push_back(i);
                DFS(res, out, n , k ,i+1);
                out.pop_back();
            }
        }
    }
};