class Solution {
public:
void dfs(vector<vector<int>> &g,int i,int j){
    if(i<0||i>=g.size()||j<0||j>=g[0].size()) return;
    if(g[i][j]!=1) return;
    g[i][j]=0;
    dfs(g,i+1,j);
    dfs(g,i-1,j);
    dfs(g,i,j-1);
    dfs(g,i,j+1);
}
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size(),a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||j==0||i==n-1||j==m-1&&grid[i][j]==1)){
              dfs(grid,i,j);
                }  
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    a++;
                }
            }
        }
        return a;
        
    }
};