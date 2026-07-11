class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int cols = matrix[0].size();
        vector<int> h(cols, 0);
        int maxi = 0;
        for (auto& row : matrix) {
            for (int i = 0; i < cols; ++i)
                h[i] = (row[i] == '1') ? h[i] + 1 : 0;
            maxi = max(maxi, largestRectangleArea(h));
        }
        return maxi;
    }
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        vector<int> left(n), right(n, n);
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && h[st.top()] >= h[i])
                st.pop();
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        st = stack<int>();
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && h[st.top()] >= h[i])
                st.pop();
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        int maxi = 0;
        for (int i = 0; i < n; ++i)
            maxi = max(maxi, h[i] * (right[i] - left[i] - 1));
        return maxi;
    }
};