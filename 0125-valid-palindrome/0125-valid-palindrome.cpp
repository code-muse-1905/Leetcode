class Solution {
public:
    bool isPalindrome(string s) {
     if(s.empty()) return true;
     string a;
      for(char c :s){
        if(isalnum(c)){
            a+=tolower(c);
        }
      }
      int st=0,l=a.size()-1;
      while(st<l){
      if(a[st]!=a[l]) return false;
      st++;l--;
       }
       return true;
    }
};