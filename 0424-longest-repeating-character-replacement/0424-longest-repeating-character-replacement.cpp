class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> c(26);
        int l=0;
        int ans=0;
        int maxi=0;
        for(int r=0; r<s.length();r++){
            maxi = max(maxi, ++c[s[r]-'A']);
            if(r-l+1 -maxi >k) {
                c[s[l]-'A']--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};