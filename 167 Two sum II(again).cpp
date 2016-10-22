class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>m;
        for(int i = 0; i < numbers.size(); ++i){
            m[numbers[i]] = i+1;
        }
        for(int i = 0; i < numbers.size();++i){
            int cur = target - numbers[i];
            if(m.find(cur) != m.end()){
                return {i+1, m[cur]};
                break;
            }
        }
        return {};
    }
};