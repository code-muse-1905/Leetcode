class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        const int MOD=1e9+7;
        int m=grid.size(),n=grid[0].size();
        vector<int>r(n,0),d(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) {
                    r[0]=1;
                    d[0]=0;
                    continue;
                }
                int fT=0;
                if(i>0) {
                    fT=grid[i-1][j]==0?(r[j]+d[j])%MOD:r[j];
                }
                int fL=0;
                if(j>0){
                    fL=grid[i][j-1]==0?(r[j-1]+d[j-1]) %MOD:d[j-1];
                }
                d[j]=fT;
                r[j]=fL;
            }
        }
        return (r[n-1]+d[n-1]) %MOD;
        
    }
};