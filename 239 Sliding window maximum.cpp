class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        if(k == 0) return res;
        int left = 0, right = k-1;
        while(right<nums.size()){
            int m = INT_MIN;
            for(int i = left; i <= right;++i){
                m = max(m, nums[i]);
            }
            res.push_back(m);
            ++left;
            ++right;
        }
        return res;
    }
};