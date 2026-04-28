class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int r= grid.size();
        int c= grid[0].size();
        vector<int>arr;

        int mini = INT_MAX;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                arr.push_back(grid[i][j]);

            }
        }


        int base =arr[0];
        for(int i=0; i<arr.size(); i++){
            if(abs(arr[i]-base)%x!=0){
                return -1;
            }

        }

        sort(arr.begin(), arr.end());

        int mid =arr[arr.size()/2];

        int cnt=0;

        for(int i=0; i<arr.size(); i++){
            cnt+=abs(arr[i]-mid) /x;
        }

        return cnt;
        
    }
};