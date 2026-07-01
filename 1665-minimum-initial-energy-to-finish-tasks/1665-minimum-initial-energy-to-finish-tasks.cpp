class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
      sort(tasks.begin(),tasks.end(),[](vector<int>& a,vector<int>& b) {
        return (a[1]-a[0]>b[1]-b[0]);
      });
      int e=0;
      int a=0;
      for(auto i:tasks){
        int act=i[0];
        int mini=i[1];
        if(e<mini){
            a+=mini-e;
            e=mini;
        }
        e-=act;
      }
      return a;
    }
};