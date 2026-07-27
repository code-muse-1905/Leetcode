class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=0,n=0;
        for(int i:nums){
            if(i>m){
                n=m;
                m=i;
            } else if(i>n)
            n=i;
        }
        return (m-1)*(n-1);
    }
};