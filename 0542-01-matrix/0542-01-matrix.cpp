class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
      int n=mat.size(),m=mat[0].size();
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0) q.push({i,j});
            else mat[i][j]=-1;
        }
      }  
      vector<pair<int,int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
      int d=1;
      while(!q.empty()){
         int s=q.size();
         while(s--){
            auto [x,y]=q.front();
            q.pop();
            for(auto [i,j]:dir){
                int nx=x+i,ny=y+j;
                if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]==-1) {
                    mat[nx][ny]=d;
                    q.push({nx,ny});
                }
            }
         } 
         d++;
      }
      return mat;
    }
};