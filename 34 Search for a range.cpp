class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count = upper_bound(nums.begin(), nums.end(),target) - lower_bound(nums.begin(),nums.end(),target);
        
        auto begin = lower_bound(nums.begin(),nums.end(), target);
        int beg = begin - nums.begin();
        int end = beg + count -1;
        vector<int> res;
        if(count == 0) return {-1,-1};
        else if(count == 1){
            res.push_back(beg);
            res.push_back(beg);
        }
        else{
            res.push_back(beg);
            res.push_back(end);
        }
        return res;
    }
};