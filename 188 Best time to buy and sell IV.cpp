class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(prices.empty()) return 0;
        if(k > prices.size()) return solve(prices);
        vector<int> g(k+1,0);
        vector<int> l(k+1,0);
        for(int i = 0; i < prices.size()-1; ++i){
            int diff = prices[i+1] - prices[i];
            for(int j = k; j > 0; --j){
                l[j] = max(g[j-1]+max(diff,0),l[j]+diff);
                g[j] = max(g[j],l[j]);
            }
        }
        return g[k];
    }
    int solve(vector<int>& prices){
        int res = 0;
        for(int i = 0; i < prices.size()-1; ++i){
            if(prices[i+1]>prices[i])
                res += prices[i+1] - prices[i];
        }
        return res;
    }
    
};