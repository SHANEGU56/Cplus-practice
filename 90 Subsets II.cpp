class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>res;
        vector<int>out;
        sort(nums.begin(),nums.end());
        getsets(nums,res,out,0);
        return vector<vector<int>>(res.begin(),res.end());
    }
    void getsets(vector<int>& nums, set<vector<int>>&res, vector<int>&out,int pos){
        res.insert(out);
        for(int i = pos; i < nums.size();++i){
            out.push_back(nums[i]);
            getsets(nums,res,out,i+1);
            out.pop_back();
            //while(nums[i] == nums[i+1]) ++i;
        }
    }
};