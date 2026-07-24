class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
      if (nums.size()==1) return 1;
      const int MAX=2048;
      vector<bool>o(MAX,false);
      vector<bool>e(MAX,false);
      vector<bool>t(MAX,false);  
      for(int i:nums){
        for(int x=0;x<MAX;x++){
            if(o[x])
            e[x^i]=true;
        }
        o[i]=true;
      }
       for(int i:nums){
        for(int x=0;x<MAX;x++){
            if(e[x])
            t[x^i]=true;
        }
       }
        int a=0;
        for(bool an:t)
        a+=an;
        return a;
      
    }
};