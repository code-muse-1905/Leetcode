class Solution {
public:
void dfs(vector<vector<int>> &ig,int c,int color,int i,int j) {
    if(i>=ig.size()||i<0||j>=ig[0].size()||j<0) return;
    if(ig[i][j]!=c || ig[i][j]==color ) return; 
    ig[i][j]=color; 
    dfs(ig,c,color,i-1,j);
     dfs(ig,c,color,i+1,j);
    dfs(ig,c,color,i,j+1);
     dfs(ig,c,color,i,j-1);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      int n=image.size();
      int m=image[0].size();
      int c= image[sr][sc];
      dfs(image,c,color,sr,sc);
      return image;
      
    }
};