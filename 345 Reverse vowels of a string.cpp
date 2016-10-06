class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = s.size()-1;
        while(left<right){
            left = s.find_first_of("aeiouAEIOU",left);
            right = s.find_last_of("aeiouAEIOU", right);
            if(left<right){
                swap(s[left++],s[right--]);
            }
        }
        return s;
    }
};