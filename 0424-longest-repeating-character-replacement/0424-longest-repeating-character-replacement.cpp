class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int a = 0, i = 0, maxi = 0;
        for (int j = 0; j < s.size(); j++) {
            mp[s[j]]++;
            maxi = max(maxi, mp[s[j]]);
            while ((j - i + 1) - maxi > k) {
            mp[s[i]]--;
                i++;
            }
            a = max(a, j - i + 1);
        }

        return a; 
    }
};