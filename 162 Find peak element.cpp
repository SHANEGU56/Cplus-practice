class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size()-1;
        int res;
        if(n <= 0) return 0;
        else if(nums[0] > nums[1]) return 0;
        else if(nums[n] > nums[n-1]) return n;
        else{
            for(int i = 1; i < n; ++i){
                if((nums[i] > nums[i-1]) && (nums[i] > nums[i+1])) res = i;
            }
        }
        return res;
    }
};