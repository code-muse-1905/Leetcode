class Solution {
public:
    long long sumAndMultiply(int n) {
      long long sum=0;
      long long x=0, p=1;
      while (n>0){
       int dig=n%10;
       if(dig!=0) {
        x=dig*p+x;
       p*=10;
       sum+=dig;
      } 
      n/=10; 
      }
      return x*sum;
    }
};