class Solution {
public:
    bool checkDivisibility(int n) {
        int c=n;
        int s=0;
        int p=1;
        while(n>0){
            int t=n%10;
            s+=t;
            p*=t;
           n/=10;
        }
        return (c%(s+p)==0);
        
    }
};