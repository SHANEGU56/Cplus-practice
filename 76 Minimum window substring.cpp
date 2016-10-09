class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() >s.size()) return "";
        string res = "";
        int left = 0, count = 0, minlen = s.size()+1;
        unordered_map<char, int> m;
        for(int i = 0; i < t.size();++i){
            ++m[t[i]];
        }
        for(int right = 0; right < s.size(); ++right){
            if(m.find(s[right])!=m.end()){
                --m[s[right]];
                if(m[s[right]] >= 0) ++count;
                while(count == t.size()){
                    if(right-left+1 < minlen){
                        minlen = right - left +1;
                        res = s.substr(left, minlen);
                    }
                    if(m.find(s[left])!=m.end()){
                        ++m[s[left]];
                        if(m[s[left]] > 0) -- count;
                    }
                    ++left;
                }
            }
        }
        return res;
    }
};