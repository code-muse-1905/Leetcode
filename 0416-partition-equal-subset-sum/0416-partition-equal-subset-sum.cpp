class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int i:nums)
            s+=i;
            if(s%2!=0) return false;
            int ts=s/2;
            vector<bool>arr(ts+1,false);
            arr[0]=true;
            for(int i:nums){
                for(int j=ts;j>=i;j--){
                    arr[j]=arr[j]||arr[j-i];
                    if(arr[ts]) return true;
                }
            }
        return arr[ts];
     }
};