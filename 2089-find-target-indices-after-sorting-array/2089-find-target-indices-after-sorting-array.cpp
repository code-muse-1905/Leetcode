class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      vector<int>a;
      int l=0,e=0;
      for(int i:nums) {
        if(i<target) l++;
         else if(i==target) e++;
      }
      for(int i=0;i<e;i++) a.push_back(l+i);
      return a;
    }
};