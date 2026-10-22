class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int ans=INT_MAX;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0) ind=i;
        }

       int ib=0,db=0;
        for(int i=0;i<n;i++){
            int ne=nums[(i+1)%n];
            if(nums[i]>ne) ib++;
            if(nums[i]<ne) db++;
        }

        if(ib>1 && db>1) return -1;

        if(ib<=1){
            ans = min({ans,ind,n-ind+2});
        }
        if(db<=1){
            ans = min({ans,n-ind,ind+2});
        }
        return ans ;
    }
};