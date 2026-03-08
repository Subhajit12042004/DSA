class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int actul =0;
        int expected = n*(n+1)/2;
        for(int i=0; i<n; i++){
            actul+=nums[i];
        }


   return expected - actul;
        
    }
};