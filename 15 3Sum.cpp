class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size();++i){
            if(nums[i]>0)break;
            int target = 0 - nums[i];
            int j = i+1, k = nums.size()-1;
            while(j < k){
                if(nums[j] + nums[k] == target){
                    // set particular feature
                    res.insert({nums[i],nums[j],nums[k]});
                    // 虽然可以利用set的特性，而省略此步，但会耗费大量的时间
                    while (j < k && nums[j] == nums[j + 1]) ++j; 
                    while (j < k && nums[k] == nums[k - 1]) --k;
                    ++j;
                    --k;
                }else if(nums[j] + nums[k] < target) ++j;
                else --k;
            }
        }
        return vector<vector<int>>(res.begin(),res.end());
    }
};