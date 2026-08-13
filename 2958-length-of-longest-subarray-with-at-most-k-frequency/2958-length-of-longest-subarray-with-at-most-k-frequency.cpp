class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int a=0,s=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                s++;
                mp[nums[s]]--;
            }
            a=max(a,i-s);
        }
        return a;
        
    }
};