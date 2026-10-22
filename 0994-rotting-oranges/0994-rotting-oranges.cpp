class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
     int r=grid.size(), c =grid[0].size(); 
     int fresh=0;//4
     queue<pair<int,int>>q;//{0,1} 
     for(int i=0;i<r;i++){ 
        for(int j=0;j<c;j++){
            if(grid[i][j]==2) q.push({i,j});
            if(grid[i][j]==1) fresh++;
        } 
     }
     if(fresh==0) return 0;
     if(q.empty()) return -1;
     int t=-1;//1
     vector<pair<int,int>>dir = {{1,0},{0,1},{-1,0},{0,-1}};
     while(!q.empty()){
        int size = q.size(); //1
        while(size--){ 
            auto [i,j] = q.front(); 
            q.pop(); 
            for(auto [x,y]: dir){
                int nx=i+x , ny=j+y;
                if(nx>=0 && nx<r && ny>=0 && ny<c && grid[nx][ny]==1){
                    fresh--;
                    grid[nx][ny]=2;
                    q.push({nx,ny});
                }
            }
        }
        t++;
     }

     if(fresh!=0) return -1;
     return t; 
    }
};