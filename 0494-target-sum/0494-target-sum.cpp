class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int t) {
        int tot = accumulate(nums.begin(), nums.end(), 0);
        if (abs(t) > tot) return 0;
        if ((tot + t) % 2) return 0;
            int sum = (tot + t) / 2;
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++)
            dp[i][0] = 1;
            for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
              if (nums[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j] +dp[i - 1][j - nums[i - 1]];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][sum];
    }
};