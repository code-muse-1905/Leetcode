class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int a=0;
        for(int i:arr1){
            int c=0;
            for(int j:arr2){
                if(abs(i-j)>d) c++;
            }
            if(c==arr2.size()) a++;
        }
        return a;
    }
};