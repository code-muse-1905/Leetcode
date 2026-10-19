class Solution {
public:
    unordered_map<int,list<int>>mp;
    unordered_map<int,bool>visited;
    void bfs(int node){
        queue<int>q;//2
        q.push(node);
        visited[node]=true;
        while(!q.empty()){
            int frontnode = q.front();
            q.pop();
            for(auto i:mp[frontnode]){
                if(visited[i]==false){
                    visited[i]=true;
                    q.push(i);
                }
            }
        }  
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        // unordered_map<int,list<int>>mp;
        int n=isConnected.size();
        int m=isConnected[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j]==1){
                    mp[i].push_back(j);
                    mp[j].push_back(i);
                }
            }
        }
        int ans=0;
        // unordered_map<int,bool>visited;
        for(int i=0;i<n;i++){
        if(visited[i]==false){
                ans++;
                bfs(i); 
            }
        }
        return ans;
    }
};
