class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int g[3] = {0};
        int l[3] = {0};
        for(int i = 0; i < prices.size()-1; ++i){
            int diff = prices[i+1] - prices[i];
            for(int j = 2; j >= 1; --j){
                l[j] = max(g[j-1]+max(0,diff),l[j]+diff);
                g[j] = max(g[j],l[j]);
            }
        }
        return g[2];
        
    }
};