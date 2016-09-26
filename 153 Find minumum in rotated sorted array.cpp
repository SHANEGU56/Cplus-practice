class Solution {
public:
    int findMin(vector<int> &num) {
        int left = 0, right = num.size() - 1;
        if (num[left] > num[right]) {
            while (left != (right - 1)) {
                int mid = (left + right) / 2;
                if (num[left] < num[mid]) left = mid;
                else right = mid;
            }
            return min(num[left], num[right]);
        }
        return num[0];
    }
};