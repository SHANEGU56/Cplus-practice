class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i =0 ; i < nums.size();++i){
            if(nums[i] > 0) break; // save half time due to the sort
            int target = 0 - nums[i];
            int j = i + 1, k = nums.size()-1;
            while(j < k){
                if(nums[j] + nums[k] == target) {
                    res.insert({nums[i],nums[j],nums[k]}); 
                    // save time
                    while(j < k && nums[j] == nums[j+1]) ++j;
                    while(j < k && nums[k] == nums[k-1]) --k;
                    ++j;
                    --k;
                }else if(nums[j] + nums[k] < target) ++j;
                else --k;
            }
        }
        return vector<vector<int>>(res.begin(),res.end());
    }
};