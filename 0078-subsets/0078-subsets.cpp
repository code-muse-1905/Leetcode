class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result={{}};
       for(int k:nums){
        int n=result.size();
        for(int i=0;i<n;i++){
            vector<int>s=result[i];
            s.push_back(k);
            result.push_back(s);
        }
       }
       return result;
    }
};