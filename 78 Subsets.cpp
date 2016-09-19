class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> out;
        sort(nums.begin(),nums.end());
        getres(nums, res, out,0);
        return res;
    }
    void getres(vector<int>& nums, vector<vector<int>>& res, vector<int>& out, int pos){
        res.push_back(out);
        for(int i = pos; i < nums.size(); ++i){
            // 三步曲，先push_back, 递归,pop_back；
            out.push_back(nums[i]);
            getres(nums,res,out,i+1);
            out.pop_back();
        }
    }
};