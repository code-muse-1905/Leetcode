class Solution {
public:
    int sumCounts(vector<int>& nums) {
      int a=0, n=nums.size();
      for(int i=0;i<=n;i++){
        unordered_map<int,int>mp;
        for(int j=i;j<n;j++){
            mp[nums[j]]++;
            int c=mp.size();
            a+=c*c;
        }
      } 
      return a;
    }
};