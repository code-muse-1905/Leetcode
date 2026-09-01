class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int, int>> sorted;
        for (int i = 0; i < n; i++) {
            sorted.push_back({nums[i], i});
        }
        sort(sorted.begin(), sorted.end());
        vector<int> a = nums;
        int start = 0;
        for (int i = 1; i <= n; i++) {
            if (i == n || sorted[i].first - sorted[i - 1].first > limit) {
                vector<int> values;
                vector<int> indices;

                for (int j = start; j < i; j++) {
                    values.push_back(sorted[j].first);
                    indices.push_back(sorted[j].second);
                }
                sort(indices.begin(), indices.end());
                for (int j = 0; j < values.size(); j++) {
                    a[indices[j]] = values[j];
                }

                start = i;
            }
        }
        return a;
    }
};