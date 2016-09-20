class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())return 0;
        int res = 0;
        int minpri = prices[0];
        for(int i = 0; i < prices.size(); ++i){
            minpri = min(minpri, prices[i]);
            res = max(res, prices[i] - minpri);
        }
        return res;
    }
};