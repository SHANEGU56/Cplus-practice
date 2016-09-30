class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> ma;
        for(int i = 0; i < nums.size();++i){
            ++ma[nums[i]];
        }
        for(int i = 0; i < nums.size();++i){
            if(ma[nums[i]] >2){
                int count = ma[nums[i]]-2;
                for(int j = 0; j < count; ++j){
                    nums.erase(lower_bound(nums.begin(),nums.end(),nums[i]));
                }
                ma[nums[i]] = 2;
            }
        }
        return nums.size();
    }
};