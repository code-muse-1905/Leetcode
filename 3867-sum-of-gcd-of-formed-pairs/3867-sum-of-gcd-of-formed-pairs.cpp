class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi) maxi=nums[i];
            nums[i]=gcd(maxi,nums[i]);
        }
     sort(nums.begin(),nums.end());
    int l=0,h=n-1;
    long long a=0;
    while(l<h){
        a+=gcd(nums[l],nums[h]);
        l++;h--;
    }
    return a;
  }
};