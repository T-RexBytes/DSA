class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        int m = 0;
        int n = cols - 1;
        while (m < rows && n >= 0) {
            if (grid[m][n] < 0) {
                count += (rows - m);
                n--;
            } else {
                m++;
            }
        }
        return count;
    }
};
