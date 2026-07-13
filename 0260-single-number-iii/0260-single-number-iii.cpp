class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      unordered_map<int,int>mp;
      for(int i:nums)
        mp[i]++; 
        vector <int>a;
        for(auto& it:mp){
            if(it.second==1){
                a.push_back(it.first);
            }
        }
        return a;

    }
};