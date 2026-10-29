class Solution {
public:
void dfs(vector<vector<char>> &b,int i,int j){
    if(i<0 || i>=b.size() || j<0 ||j>=b[0].size()) return ;
    if(b[i][j]=='X' || b[i][j]=='a') return ;
    b[i][j]='a';
    dfs(b,i-1,j);
    dfs(b,i+1,j);
    dfs(b,i,j+1);
    dfs(b,i,j-1);
}
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||i==n-1||j==0||j==m-1) && board[i][j]=='O'){
                    dfs(board,i,j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if( board[i][j]=='a') board[i][j]='O';
            }
        }
        
    }
};