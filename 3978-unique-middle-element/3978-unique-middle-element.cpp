class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        int mid=nums.size()/2;
        int middle=nums[mid];
        return (mp[middle]==1);
    }
};