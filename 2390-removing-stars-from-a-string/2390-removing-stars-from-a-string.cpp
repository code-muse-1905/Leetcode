class Solution {
public:
    string removeStars(string s) {
        string r;
        for(char c:s)
        if(c=='*') r.pop_back();
        else r+=c;
        return r;
    }
};