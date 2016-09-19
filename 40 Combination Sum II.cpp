class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>res;
        vector<int>out;
        sort(candidates.begin(),candidates.end());
        resultfind(candidates,res,out,target,0);
        return vector<vector<int>>(res.begin(),res.end());
    }
    void resultfind(vector<int>& candidates, set<vector<int>>& res, vector<int>& out, int target, int pos){
        if(target < 0) return;
        else if (target == 0) res.insert(out);
        else {
            for(int i = pos; i < candidates.size();++i){
                out.push_back(candidates[i]);
                resultfind(candidates, res, out, target - candidates[i], i + 1);
                out.pop_back();
            }
        }
    }
};