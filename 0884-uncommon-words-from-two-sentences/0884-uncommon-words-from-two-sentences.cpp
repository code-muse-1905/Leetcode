class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       vector<string>a;
       unordered_map<string, int> mp;
       stringstream ss(s1);
       string w;
       while(ss>>w){
       mp[w]++;
       }
       stringstream ss2(s2);
       while(ss2>>w){
       mp[w]++;
       }
        for(auto it:mp) {
            if(it.second==1)
            a.push_back(it.first);
        }
        return a;
    }
};