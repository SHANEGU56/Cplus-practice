class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int> com;
        int res = 0;
        for(int i = 0; i < nums.size(); ++i){
            com[nums[i]] = i;
        }
        if(com.find(target)==com.end()) return -1;
        else{
            res = com[target];
        }
        return res;
        //auto res = com.find(target);
        //return distance(res,com.begin());
    }
};