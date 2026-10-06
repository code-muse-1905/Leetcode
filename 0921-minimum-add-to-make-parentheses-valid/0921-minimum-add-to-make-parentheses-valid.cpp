class Solution {
public:
    int minAddToMakeValid(string s) {
      int b=0,e=0;
      for(char c:s){
        if(c=='(') b++;
        else if(b) b--;
        else e++;
      }  
      return b+e;
    }
};