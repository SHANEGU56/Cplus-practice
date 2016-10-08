class Solution {
public:
    int myAtoi(string str) {
        if(str.empty()) return 0;
        stringstream trans;
        trans << str;
        int res;
        trans >> res;
        return res;
    }
};