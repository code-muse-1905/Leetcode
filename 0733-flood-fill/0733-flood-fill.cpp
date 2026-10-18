class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size();
        int col = image[0].size();
        int source = image[sr][sc];
        
        if (color == source)
            return image;
            
        dfs(sr, sc, image, row, col, color, source);
        return image;
    }

    void dfs(int sr, int sc, vector<vector<int>>& image, int row, int col, int color, int source) {
        if (sr >= 0 && sr < row && sc >= 0 && sc < col && image[sr][sc] == source) {
            image[sr][sc] = color;
            dfs(sr + 1, sc, image, row, col, color, source);
            dfs(sr, sc + 1, image, row, col, color, source);
            dfs(sr - 1, sc, image, row, col, color, source);
            dfs(sr, sc - 1, image, row, col, color, source);
        }
    }
};