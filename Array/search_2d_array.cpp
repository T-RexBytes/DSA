class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        // Find the possible row
        for (int i = 0; i < matrix.size(); i++) {
            if (target <= matrix[i][matrix[0].size() - 1]) {
                // Search in that row
                for (int j = 0; j < matrix[0].size(); j++) {
                    if (matrix[i][j] == target) return true;
                }
                return false;
            }
        }
        return false;
    }
};

