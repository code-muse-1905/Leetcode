class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int a = -1;
        int n=nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                if (a == -1) a = nums[i];
                else a &= nums[i];
            }
        }
        return a == -1 ? 0 : a;
    }
};