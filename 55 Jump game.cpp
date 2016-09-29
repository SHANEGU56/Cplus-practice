class Solution {
public:
    bool canJump(vector<int>& nums) {
        int pos = 0;
        int n = nums.size()-1;
        for(int i = 0; i <= n; ++i){
           if(i > pos || pos >= n) break;
           pos = max(pos, i + nums[i]) ;
        }
        return pos >= n;
    }
};