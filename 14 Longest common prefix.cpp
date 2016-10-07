class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        for(int i = 0; i < strs[0].size(); ++i){
            for(int j = 0; j < strs.size() -1 ;++j){
                if(i >= strs[j].size() || strs[j][i] != strs[j+1][i]){
                    return strs[j].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};