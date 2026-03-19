class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int>cols(m);
        int cnt =0;
        for(int i=0; i<n; i++){
            int row =0;
            for(int j=0; j<m; j++){
                cols[j] +=grid[i][j];
                row +=cols[j];
                if(row<=k){
                    cnt++;
                }

            }
        }
        return cnt;
    }
};