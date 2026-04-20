class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n= nums.size();
        int maxi= -1;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]<nums[j]){
                    int res = abs(nums[j]-nums[i]);
                    maxi = max(res,maxi);
                }
            }


        }
        return maxi;
        
    }
};