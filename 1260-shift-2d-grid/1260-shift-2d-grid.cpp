class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int t=m*n;
        k%=t;
        vector<vector<int>>a(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int oldi=i*n+j;
                int newi=(oldi+k)%t;
                int r=newi/n;
                int c=newi%n;
                a[r][c]=grid[i][j];
            }
        }
        return a;
    }
};