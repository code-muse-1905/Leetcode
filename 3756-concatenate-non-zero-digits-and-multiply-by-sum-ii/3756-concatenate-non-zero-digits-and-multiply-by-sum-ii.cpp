vector<long long> pow10(1e5 + 1, 1);
const int MOD = 1e9 + 7;

void init () {
    for (int i = 1; i <= 1e5; i++) {
        pow10[i] = (pow10[i-1] * 10) % MOD;
    }
}

class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        init ();
        int n = s.size(), m = queries.size();
        vector<int> sum(n+1, 0), cnt(n+1, 0);
        vector<long long> x(n+1, 0);
        for (int i = 0; i < n; i++) {
            int e = s[i] - '0';
            sum[i+1] = sum[i] + e;
            cnt[i+1] = cnt[i] + !(e == 0);
            x[i+1] = e ? (x[i] * 10 + e)%MOD : x[i];
        }
        vector<int> ans(m);
        for (int i = 0; i < m; i++) {
            int l = queries[i][0], r = queries[i][1]+1;
            int len = cnt[r] - cnt[l];
            long long a = (x[r] - (x[l] * pow10[len]) % MOD + MOD) % MOD;
            ans[i] = (a * (sum[r] - sum[l])) % MOD;
        }
        return ans;
    }
};