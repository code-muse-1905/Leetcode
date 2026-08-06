class Solution {
public:
    int digitprod(int n) {
        int p=1;
      while(n>0){
        int d=n%10;
        p*=d;
        n/=10;
      }  
      return p;
    }
    int smallestNumber(int n,int t){
        while(true){
            if (digitprod(n)%t==0) return n;
            n++;
        }
    }
    
};