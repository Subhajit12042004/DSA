class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans =-1;
        int minans=INT_MAX;
        for(int i=0; i<capacity.size(); i++){
            if(capacity[i]>=itemSize && capacity[i]<minans){
                ans = i;
                minans = capacity[i];

            }
        }

        return ans;
        
    }
};