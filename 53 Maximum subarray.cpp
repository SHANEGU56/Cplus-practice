class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0], tmp = res;
        for (int i = 1; i < nums.size(); ++i) {
            tmp = max(tmp + nums[i], nums[i]);
            res = max(res, tmp);
        }
        return res;
    }
};