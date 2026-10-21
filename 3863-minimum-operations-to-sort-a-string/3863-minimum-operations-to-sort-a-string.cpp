class Solution {
public:
    int minOperations(string s) {
     int n=s.length();
     string a=s;
     sort(a.begin(),a.end());
     if(s==a) return 0;
     if(n==2) return -1;
     char mini=*min_element(s.begin(),s.end());
     char maxi=*max_element(s.begin(),s.end());
     int i1=s.find(mini);
     int i2=s.rfind(maxi);
     if(s[0]==mini||s[n-1]==maxi) return 1;
     else if(i1!=n-1||i2!=0) return 2;
     else return 3;   
    }
};