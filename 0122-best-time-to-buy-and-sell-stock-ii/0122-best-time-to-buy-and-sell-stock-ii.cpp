class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int h=INT_MIN,cnh=0;
        for(const int i:prices){
            int p=h,pnh=cnh;
            h=max(p,pnh-i);
            cnh=max(pnh,p+i);
         }
        return cnh;
    }
};