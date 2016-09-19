class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>out;
        sort(candidates.begin(),candidates.end());
        getresult(candidates, res, out, target, 0);
        return res;
    }
    void getresult(vector<int>& candidates, vector<vector<int>>& res, vector<int>& out, int target, int pos){
        if(target<0) return;
        else if(target == 0) res.push_back(out);
        else{
            for(int i = pos; i < candidates.size(); ++i){
                out.push_back(candidates[i]);
                // i not i+1 is that the elements in the candidates can be used repeatedly
                getresult(candidates, res, out, target-candidates[i],i);
                out.pop_back();
            }
        }
    }
};