class Solution {
public:
    int maximumLengthSubstring(string s) {
     unordered_map<char,int>mp;
     int i=0,j=0,a=0;
     for(char c:s){
        mp[c]++;
     while(mp[s[j]]>2){
        mp[s[i]]--;
        i++;
     }  
     a=max(a,j-i+1);
     j++;
     } 
     return a;
    }
};