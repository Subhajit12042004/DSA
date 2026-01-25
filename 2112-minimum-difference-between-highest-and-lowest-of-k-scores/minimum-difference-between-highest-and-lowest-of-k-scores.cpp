class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int miniDiff =INT_MAX;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(k==1) return 0;
        for(int i=k-1; i<n; i++){
            miniDiff =min(miniDiff, nums[i] -nums[i-k+1]);

        }

        return miniDiff;
        
    }
};