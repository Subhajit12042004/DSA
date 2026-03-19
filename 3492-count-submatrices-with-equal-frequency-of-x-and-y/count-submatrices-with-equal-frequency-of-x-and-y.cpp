class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt=0;
        vector<int>cols(m,0);
        vector<int>countx(m,0);
        for(int i=0; i<n; i++){
            int sum=0;
            int cntx=0;
            for(int j=0; j<m; j++){
                if(grid[i][j] == 'X'){
                    cols[j]+=1;
                    countx[j]+=1;
                }
                else if(grid[i][j]=='Y'){
                    cols[j]-=1;
                }

                sum+=cols[j];
                cntx+=countx[j];
                

            if(sum==0 && cntx >=1 ){
                cnt++;
            }

            }

        }

        return cnt;

    }
};