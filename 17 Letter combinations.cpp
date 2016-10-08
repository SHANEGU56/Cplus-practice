class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        vector<string> dict = {"abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        DPS(digits, res, dict, "", 0);
        return res;
    }
    void DPS(string digits, vector<string>& res, vector<string>& dict, string out, int level){
        if(digits.size() == level) res.push_back(out);
        else {
            string str = dict[digits[level]-'2'];
            for(int i = 0; i < str.size(); ++i){
                out.push_back(str[i]);
                DPS(digits, res, dict, out, level+1);
                out.pop_back();
            }
        }
    }
};