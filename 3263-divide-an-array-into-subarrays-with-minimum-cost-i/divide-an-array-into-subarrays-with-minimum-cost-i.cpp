class Solution {
public:
    int minimumCost(vector<int>& nums) {
        vector<int>arr;
        int sum =nums[0];
        for(int i=1; i<nums.size(); i++){
            arr.push_back(nums[i]);

        }
        sort(arr.begin(), arr.end());
        return sum +arr[0]+arr[1];
    }
};