class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lsum =0, rsum =0, maxsum =0;
        for(int i =0; i<=k-1; i++){
            lsum = lsum +nums[i];
            maxsum = lsum;

        } 
        int right = n-1;
        for(int j =k-1; j>=0; j--){
            lsum = lsum -nums[j];
            rsum = rsum + nums[right];
            right = right -1;
            maxsum = max(maxsum, rsum +lsum);
        }


        return maxsum;
        
    }
};