class Solution {
public:
void dfs(vector<vector<int>>& g,int i,int j){
    if(i<0||j<0||i>=g.size()||j>=g[0].size()||g[i][j]==1) return;
    int s[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    g[i][j]=1;
    for(auto &k:s){
        dfs(g,i+k[0],j+k[1]);
    }
}
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        for(int i=0;i<n;i++){
            dfs(grid,i,0);
            dfs(grid,i,m-1);
        }
        for(int j=0;j<m;j++){
            dfs(grid,0,j);
            dfs(grid,n-1,j);
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             if(grid[i][j]==0){
                c++;
                dfs(grid,i,j);
             }
            }
        }
        return c;
        
    }
};