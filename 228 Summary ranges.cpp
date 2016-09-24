class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int s = 0, n = nums.size();
        while(s < n){
            int j = 1;
            while(s + j < n && nums[s + j] - nums[s] == j) j++;
            res.push_back(j <= 1 ? to_string(nums[s]) : to_string(nums[s]) + "->" + to_string(nums[s+j-1]));
            s += j;
        }
        return res;
    }
};