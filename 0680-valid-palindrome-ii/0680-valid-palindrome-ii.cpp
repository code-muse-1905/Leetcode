class Solution {
public:
    bool isPalindrome(const string &s, int st, int l) {
        while (st < l) {
            if (s[st++] != s[l--]) return false;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int st = 0, l = s.size() - 1;
        while (st < l) {
            if (s[st] != s[l]) {
                return isPalindrome(s, st + 1, l) || isPalindrome(s, st, l - 1);
            }
            st++;
            l--;
        }
        return true;
    }
};