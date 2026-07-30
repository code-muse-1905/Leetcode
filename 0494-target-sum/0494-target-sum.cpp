class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<int,int> c;
        c[0]=1;
        for(int n:nums){
            unordered_map<int,int> temp;
            for(auto[t,count]:c){
                temp[t+n]+=count;
                 temp[t-n]+=count;
            }
            c=temp;
        }
        return c[target];
    }
};