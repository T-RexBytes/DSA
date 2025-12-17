class Solution {
public:
    long long maximumProfit(vector<int>& prices, int k) {
        vector<vector<long long>> dp(k + 1, vector<long long>(3, -1e9));
        for (int i = 0; i <= k; i++)
            dp[i][0] = 0;
        for (int p : prices) {
            for (int i = k; i > 0; i--) {
                dp[i][0] = max({dp[i][0], dp[i - 1][1] + p, dp[i - 1][2] - p});
                dp[i - 1][1] = max(dp[i - 1][1], dp[i - 1][0] - p);
                dp[i - 1][2] = max(dp[i - 1][2], dp[i - 1][0] + p);
            }
        }
        long long ans = 0;
        for (int i = 0; i <= k; i++)
            ans = max(ans, dp[i][0]);
        return ans;
    }
};
