// need to be updated

class Solution {
public:
    static const int MOD = 1e9 + 7;

    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();

        // dp[j][r] → compressed 2D DP (row by row)
        vector<vector<int>> dp(n, vector<int>(k, 0));

        dp[0][grid[0][0] % k] = 1;

        for (int i = 0; i < m; i++) {
            vector<vector<int>> new_dp(n, vector<int>(k, 0));
            for (int j = 0; j < n; j++) {
                for (int r = 0; r < k; r++) {
                    if (dp[j][r] == 0) continue;

                    int new_r = (r + grid[i][j]) % k;

                    // From top
                    new_dp[j][new_r] = (new_dp[j][new_r] + dp[j][r]) % MOD;

                    // From left (only if j > 0)
                    if (j > 0)
                        new_dp[j][new_r] = (new_dp[j][new_r] + new_dp[j-1][r]) % MOD;
                }
            }
            dp = new_dp;
        }

        return dp[n-1][0];
    }
};
