class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        set<vector<int>>res;
        vector<int>out;
        forresult(res, out, k , n, 1);
        return vector<vector<int>>(res.begin(),res.end());
    }
    void forresult(set<vector<int>>&res, vector<int>& out, int k, int n, int pos){
        if(k<0 || n < 0) return;
        else if(n == 0 && out.size() == k) res.insert(out);
        else{
            for(int i = pos; i < 10; ++i){
                out.push_back(i);
                forresult(res, out, k, n-i, i+1);
                out.pop_back();
            }
        }
    }
};