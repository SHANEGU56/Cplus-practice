class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>res;
        int n = nums.size()/2;
        int re ;
        for(int i = 0; i < nums.size(); ++i){
            if(++res[nums[i]] > n) re = nums[i];
        }
        return re;
    }
};