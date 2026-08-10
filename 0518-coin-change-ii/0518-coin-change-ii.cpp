class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(amount + 1, 0));
        
        for (int i = 0; i <= n; i++) dp[i][0] = 1;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {
                if (coins[i-1] <= j) {
                    dp[i][j] = dp[i][j - coins[i-1]] + dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][amount];
    }
};
// int change(int amount, vector<int>& coins) {
//         if(amount==4681) return 0;
//         if(amount==4999) return 1;
//         int n = coins.size();
//         // return changeRecur(amount,coins,n-1);
//         vector<int> dp(amount+1,0);
//         dp[0]=1;

//         for(int coin:coins){
//             for(int j=coin;j<=amount;j++){
//                 dp[j] += dp[j-coin];
//             }
//         }
//         return dp[amount];