class Solution {
public:
    int minBitFlips(int start, int goal) {
        int r=start^goal;
        return __builtin_popcount(r);
    }
};