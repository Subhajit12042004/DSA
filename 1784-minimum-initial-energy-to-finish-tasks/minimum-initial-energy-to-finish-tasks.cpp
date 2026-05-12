class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        int n= tasks.size();
     sort(tasks.begin(),tasks.end(),[](vector<int>&a, vector<int>&b){
        int diff1= a[1]-a[0];
        int diff2= b[1]-b[0];
        return diff1<diff2;
     });
     int ans=0;
     for(int i=0; i<n; i++){
    ans = max(ans+tasks[i][0] , tasks[i][1]);
    }
 return ans;
    }
};




