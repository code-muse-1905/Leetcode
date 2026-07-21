class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
       int n=s.size();
       int o=0;
       for(char i:s){
        if(i=='1') o++;
       } 
       int l=0,r=n-1;
       while(l<n && s[l]=='1') l++;
       while(r>=0 && s[r]=='1') r--;
       if(l>r) return o;
       vector<pair<int,char>>mp;
       int len=1;
       for(int i=l+1;i<=r;i++){
        if(s[i]==s[i-1]){
            len++;
        } else{
            mp.push_back({len,s[i-1]});
            len=1;
        }
     }      mp.push_back({len,s[r]});
            int maxi=0;
            for(int i=0;i+2<mp.size();i+=2){
                int range=mp[i].first+mp[i+2].first;
                maxi=max(maxi,range);
            }
            return o+maxi;
    }
};