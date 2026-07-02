class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string,int>mp;
        unordered_map<string,int>mp2;
        for(auto& i:words1){
            mp[i]++;
        }
         for(auto& j:words2){
            mp2[j]++;
        }
        int c=0;
        for (auto it:mp){
            if(it.second==1 && mp2[it.first]==1)
            c++;
        }
        return c;
    }
};