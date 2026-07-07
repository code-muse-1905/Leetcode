class Solution {
public:
    vector<string> a;
    void solve(string c,int o,int cl,int n){
        if (c.length() == 2 * n) {
            a.push_back(c); 
            return;
      }
     if(o<n){
      solve(c + "(", o + 1, cl, n);
     }   
     if(cl<o){
        solve(c + ")", o, cl + 1, n);
     }
    }
    vector<string> generateParenthesis(int n) {
     solve("", 0, 0, n);
        return a;
    }
};