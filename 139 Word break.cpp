class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &dict) {
        int len = s.size();
        vector<bool> res(len + 1, false);
        res[0] = true;
        for (int i = 0; i < len + 1; ++i) {
            for (int j = 0; j < i; ++j) {
                if (res[j] && dict.find(s.substr(j, i-j)) != dict.end()) {
                    res[i] = true;
                    break;
                }
            }
        }
        return res[len];
    }
};