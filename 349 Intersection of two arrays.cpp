class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        vector<int> res;
        for(auto i : nums1){
            ++m[i];
        }
        for(auto j : nums2){
            if(m.find(j) != m.end()) {
                res.push_back(j);
                m.erase(j);
            } 
        }
        return res;
    }
};