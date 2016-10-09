class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> res;
        DPS(nums, res, 0);
        return vector<vector<int>>(res.begin(),res.end());
    }
    void DPS(vector<int> &nums, set<vector<int>> &res, int level){
        if(level == nums.size()) res.insert(nums);
        else{
            for(int i = level; i < nums.size(); ++i){
                if (i != level && nums[i] == nums[level]) continue;
                swap(nums[i], nums[level]);
                DPS(nums,res,level+1);
                swap(nums[i],nums[level]);
            }
            
        }
    }
};