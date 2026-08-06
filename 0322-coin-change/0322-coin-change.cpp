class Solution {
public:
    int coinChange(vector<int>& coins, int a) {
        int n =coins.size();
        vector<vector<int>>dp(n+1,vector<int>(a+1));
        for(int j=0;j<=a;j++)
        dp[0][j]=INT_MAX-1;
        for(int i=0;i<=n;i++) 
        dp[i][0]=0;
        for(int j=1;j<=a;j++){
            if(j%coins[0]==0)
            dp[1][j]=j/coins[0];
            else
             dp[1][j]=INT_MAX-1;
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=a;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                } else {
                     dp[i][j]=dp[i-1][j]; 
              }
            }
        }
        if(dp[n][a]==INT_MAX-1) return -1;
        return dp[n][a];
        
    }
};