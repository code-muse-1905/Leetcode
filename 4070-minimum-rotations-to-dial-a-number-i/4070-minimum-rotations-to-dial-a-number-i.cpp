class Solution {
public:
    int minRotations(string s) {
        int c=0,a=0;
        for(char i:s){
            int d=i-'0';
            int s=(d-c+10)%10;
            a+=min(s,10-s);
            c=d;
        }
        return a;
    }
};