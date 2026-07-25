class Solution {
public:
    int maxProduct(int n) {
        int maxi=0,maxi2=0;
        for(;n>0;n/=10){
            int D=n%10;
            if(D>maxi)
            maxi2=exchange(maxi,D);
            else if(D>=maxi2)
            maxi2=D;
        }
        return maxi*maxi2;
    }
};