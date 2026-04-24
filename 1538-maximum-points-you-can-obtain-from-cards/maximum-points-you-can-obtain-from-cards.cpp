class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n= nums.size();
        int rsum=0, lsum=0, maxi=0;
        for(int i=0; i<=k-1; i++){
            lsum+=nums[i];
            maxi =lsum;
        }

        int riden =n-1;

        for(int j=k-1; j>=0; j--){
            lsum=lsum-nums[j];
            rsum+=nums[riden];
            riden=riden-1;

            maxi = max(maxi,lsum+rsum);
        }

        return maxi;
        
    }
};