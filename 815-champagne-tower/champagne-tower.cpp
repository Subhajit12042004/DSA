class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double result[101][101] = {0.0};
        result[0][0] = poured;

        for(int i = 0; i <= query_row; i++){
            for(int j = 0; j <= i; j++){
                if(result[i][j] > 1.0){
                    double overflow = (result[i][j] - 1.0) / 2.0;
                    result[i][j] = 1.0;
                    result[i+1][j] += overflow;
                    result[i+1][j+1] += overflow;
                }
            }
        }

        return result[query_row][query_glass];
    }
};