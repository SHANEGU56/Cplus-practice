class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto pos = unique(nums.begin(),nums.end());
        nums.erase(pos,nums.end());
        return nums.size();
    }
};