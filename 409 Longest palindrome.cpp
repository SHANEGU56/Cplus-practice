class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for(auto c : s){
            ++m[c];
        }
        int count = 0;
        bool single = false;
        for(auto c : s){
            if(m[c]%2 == 0) ++count;
            else { 
                count += m[c]-1;
                m[c] = 1;
                single = true;
            }
        }
        if(single) return count +1;
        else return count;
    }
};