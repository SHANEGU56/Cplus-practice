class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        while(left < right){
            int sum = numbers[left]+numbers[right];
            if(sum == target) {
                //可以直接ruturn数组，不需要建立vector，可以节省时间
                return {left+1, right+1};
            }
            else if(sum < target) ++left;
            else --right;
        }
        return {};
    }
};