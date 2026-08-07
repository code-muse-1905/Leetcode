class Solution {
public:
int rob(vector<int> & nums){
//     if(i>=nums.size()) return 0;
//     if(dp[i]!=-1) return dp[i];
//     int s=nums[i]+solve(nums,i+2,dp);
//     int sk=solve(nums,i+1,dp);
//     return dp[i]=max(s,sk);
// }
//     int rob(vector<int>& nums) {
//      vector<int>dp(nums.size(),-1);
// return solve(nums,0,dp);
  if(nums.size()==1) return nums[0];
  vector<int> dp(nums.size());
  dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (size_t i=2; i<nums.size(); i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }
        return dp.back();
    }
};