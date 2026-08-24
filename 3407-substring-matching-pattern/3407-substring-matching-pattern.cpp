class Solution {
public:
    bool hasMatch(string s, string p) {
     int pos=p.find('*');
     string b=p.substr(0,pos);
     string a=p.substr(pos+1);
     int f=s.find(b);
     if(f==string::npos) return false;
     int sc=s.find(a,f+b.size());
     return sc!=string::npos;
        
    }
};