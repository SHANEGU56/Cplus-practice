class NumArray {
public:
    vector<int> dp;
    NumArray(vector<int> &nums) {
        dp = nums;
        for(int i = 1; i < nums.size();++i){
            dp[i] += dp[i-1];
        }
    }

    int sumRange(int i, int j) {
        return i == 0?dp[j] : dp[j] - dp[i-1];
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);