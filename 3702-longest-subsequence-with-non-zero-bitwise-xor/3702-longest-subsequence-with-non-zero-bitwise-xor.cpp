class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        bool hasnz=false;
        for(int i:nums){
            x^=i;
            if(x!=0) hasnz=true;
            }
        if(x!=0) { 
            return nums.size();
        }
        if(hasnz) {
            return nums.size()-1;
        }
        return 0;
    }
};