class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        set<int>set;
        int base = nums.size()/3;
        for(int i = 0 ; i < nums.size(); ++i){
            m[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size(); ++i){
            if(m[nums[i]] > base) {
                set.insert(nums[i]);
            }
        }
        return vector<int>(set.begin(),set.end());
    }
};