class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();        // number of rows
        int n = matrix[0].size();     // number of columns
        
        for (int i = 0; i < m; i++) {
            // check the last element of each row
            if (matrix[i][n - 1] == target)
                return true;

            // if the last element is greater than target, search in this row
            else if (matrix[i][n - 1] > target) {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] == target)
                        return true;
                }
                return false; // target not in this row
            }
        }

        return false; // target not found in any row
    }
};
