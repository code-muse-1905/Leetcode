class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
       long long s=0;
       for(int i:nums) s+=i;
       long long t=s/k;
       if(s%k==0) t--;
       const long long mod=1e9+7;
       long long a=t%mod;
       long long  b=(t+1)%mod;
       long  long ans=((a*b)/2)%mod;
       return (int) ans; 
    }
};