class Solution {
public:
    int minimumPushes(string word) {
      vector<int>mp(26,0);
      for(char i:word) mp[i-'a']++;
       int a=0,as=0;
       while(true) {
        int mx=0,idx=-1;
        for(int i=0;i<26;i++){
            if(mp[i]>mx){
                mx=mp[i];
                idx=i;
            }
        }
        if(idx==-1) break;
        a+=mx*(as/8+1);
        mp[idx]=0;
        as++;
       }
       return a;
    }
};