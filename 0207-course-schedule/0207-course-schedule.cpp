class Solution {
public:
     bool dfs(int node, vector<vector<int>>& adj,vector<int>& v, vector<int>& p){
        v[node]=1,p[node]=1;
         for (auto i:adj[node]) {
            if (!v[i]) {
            if (dfs(i,adj,v,p))
            return true;
            }
            else if (p[i]) {
            return true;
            }
        }
        p[node] = 0;
        return false;
     }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto i:prerequisites){
            int a=i[0],b=i[1];
            adj[b].push_back(a);
            }
            vector<int> v(numCourses, 0);
            vector<int> p(numCourses, 0);
            for(int i=0;i<numCourses;i++){
                if(!v[i]){
                    if(dfs(i,adj,v,p)) return false;
                }
            }
            return true;
    }
};