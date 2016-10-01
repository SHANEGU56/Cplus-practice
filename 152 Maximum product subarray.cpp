class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;
        int res = nums[0], mx = nums[0], mn = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            int tmax = mx, tmin = mn;
            mx = max(max(nums[i], tmax*nums[i]), tmin*nums[i]);
            mn = min(min(nums[i], tmax*nums[i]), tmin*nums[i]);
            res = max(res,mx);
        }
        return res;
    }
};