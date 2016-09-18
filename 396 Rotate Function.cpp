class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        if(A.empty()) return 0;
        int n = A.size();
        int s = 0, candidate = 0;
        for(int i = 0; i < n; ++i){
            s += A[i];
            candidate += i * A[i];
        }
        int res = candidate;
        for(int i = n-1; i > 0; --i){
            candidate += s - n * A[i];
            res = max(candidate, res);
        }
        return res;
    }
};