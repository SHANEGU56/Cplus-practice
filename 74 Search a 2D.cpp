class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        if(matrix.empty() || matrix[0].empty()) return false;
        if (target < matrix[0][0] || target > matrix[m-1][n-1]) return false;
        int left = 0, right = m -1;
        while(left <= right){
            int mid = (left + right)/2;
            if(matrix[mid][0] == target) return true;
            else if(matrix[mid][0] < target) left = mid + 1;
            else right = mid - 1;
        }
        int l = 0, r =  matrix[right].size() - 1;
        while(l <= r){
            int middle = (l + r)/2;
            if(matrix[right][middle] == target) return true;
            else if(matrix[right][middle] < target) l = middle + 1;
            else r = middle - 1;
        }
        return false;
    }
};