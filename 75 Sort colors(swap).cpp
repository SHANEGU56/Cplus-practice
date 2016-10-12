class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red = 0, blue = n-1;
        for(int i = 0; i < n; ++i){
            if(nums[i] == 0) swap(nums[i],nums[red++]);
            else if(nums[i] == 2) swap(nums[i--], nums[blue--]);
        }
    }
};