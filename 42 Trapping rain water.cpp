// DP
class Solution {
public:
    int trap(vector<int> &A, int n) {
        int res = 0, mx = 0;
        vector<int> dp(n, 0);
        for (int i = 0; i < n; ++i) {
            dp[i] = mx;
            mx = max(mx, A[i]);
        }
        mx = 0;
        for (int i = n - 1; i >= 0; --i) {
            dp[i] = min(dp[i], mx);
            mx = max(mx, A[i]);
            if (dp[i] - A[i] > 0) res += (dp[i] - A[i]);
        }
        return res;
    }
};