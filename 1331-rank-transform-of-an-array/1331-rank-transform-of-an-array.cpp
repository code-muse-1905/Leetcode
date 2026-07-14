class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> s = arr;
        sort(s.begin(), s.end());
       unordered_map<int,int>mp;
       int r=1;
       for(int i:s){
        if(!mp.count(i)){
            mp[i]=r++;
        }
       }
       for(int &i:arr){
        i=mp[i];
       }
       return arr;
    }
};