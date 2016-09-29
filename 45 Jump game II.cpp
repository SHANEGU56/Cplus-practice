class Solution {
public:
    int jump(vector<int>& nums) {
        int n =  nums.size();
        int cur = 0, res = 0, i = 0;
        while(cur < n-1){
            int pre = cur;
            while(i<=pre){
                cur = max(cur, i + nums[i]);
                ++i;
            }
            ++res;
        }
        return res;
    }
};