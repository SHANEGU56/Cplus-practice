class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int res = upper_bound(nums.begin(),nums.end(),target)-lower_bound(nums.begin(),nums.end(),target);
        if(res == 0) return false;
        else{
                return true;
            }
    }
};