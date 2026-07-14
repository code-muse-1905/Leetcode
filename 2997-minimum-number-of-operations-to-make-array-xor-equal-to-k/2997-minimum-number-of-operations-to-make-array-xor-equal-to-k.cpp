class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int tot=0;
       int n=nums.size();
       for(int i=0;i<n;i++)
       tot^=nums[i];
       return __builtin_popcount(tot^k);
    }
};