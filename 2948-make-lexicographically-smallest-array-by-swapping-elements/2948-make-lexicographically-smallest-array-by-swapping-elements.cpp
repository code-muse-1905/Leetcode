class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());
        unordered_map<int, vector<int>> g;
        unordered_map<int, int> b;
        unordered_map<int, int> Minindex;
        int id = 1;
        g[id].push_back(arr[0]);
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] > limit) {
                id++;
            }
            g[id].push_back(arr[i]);
        }
        id = 1;
        for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] - arr[i - 1] > limit) {
                id++;
            }
        b[arr[i]] = id;
        }
        for (int i = 1; i <= id; i++) {
            Minindex[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            int groupId = b[nums[i]];
            nums[i] = g[groupId][Minindex[groupId]];
            Minindex[groupId]++;
        }
        return nums;
    }
};