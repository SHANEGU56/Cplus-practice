class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, res = 0;
        stack<int> m;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(') m.push(i);
            else if(s[i] == ')'){
                if(m.empty()) left = i +1;
                else{
                    m.pop();
                    res = m.empty() ? max(res, i-left+1) : max(res,i - m.top());
                }
            }
        }
        return res;
    }
};