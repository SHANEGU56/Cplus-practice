class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>re;
        for(int i = 0; i < nums.size();++i){
            re.insert(nums[i]);
        }
        int n = re.size();
        vector<int> res(re.begin(),re.end());
        if(n == 2) return res[1];
        if(n == 1) return res[0];
        else return res[n-3];
    }
};