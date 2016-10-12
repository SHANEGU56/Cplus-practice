class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size()<3) return 0;
        int res = 0, cnt = 0;
        int current = A[1] - A[0];
        for(int i = 2; i < A.size();++i){
            if(A[i] - A[i-1] == current){
              cnt += 1;
              res += cnt;
            }
            else{
                current = A[i] - A[i-1];
                cnt = 0;
            } 
        }
        return res;
    }
};