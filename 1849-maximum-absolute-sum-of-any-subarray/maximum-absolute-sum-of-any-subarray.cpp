class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxend = 0, minend =0;
        int maxsum = 0, minsum = 0;

        for(int i =0; i<nums.size(); i++){
            maxend = max(nums[i], maxend+nums[i]);
            minend = min(nums[i], minend + nums[i]);

            maxsum = max(maxsum, maxend);
            minsum = min(minsum, minend);



        }

        return max(maxsum, abs(minsum));
        
    }
};