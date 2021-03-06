class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (nums.size()==0) return 1;
        int n = nums.size();
        unordered_map<int, int> m;
        int mx = nums[0];
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                m[nums[i]] = 1;
                mx = max(mx, nums[i]);
            }
        }
        for (int i = 1; i <= mx; ++i) {
            if (m.find(i) == m.end()) return i;
        }
        return mx + 1;
    }
};