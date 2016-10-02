class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, int> p;
        unordered_map<string, int> s;
        istringstream in(str);
        int i = 0;
        for(string word; in>>word;++i){
            if(p.find(pattern[i])!= p.end() || s.find(word) != s.end()){
                if(p[pattern[i]] != s[word]) return false;
            }
            else {
                p[pattern[i]] = s[word] = i+1;
            }
        }
        return i == pattern.size();
    }
};