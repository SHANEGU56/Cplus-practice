class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int left = 0, res = INT_MAX, sum = 0;
        for(int i = 0; i < n; ++i){
            sum += nums[i];
            while(left <= i && sum >= s){
                res = min(res, i - left + 1);
                sum -= nums[left++];
            }
        }
        return res == INT_MAX ? 0 : res; // 注意res返回值
    }
};