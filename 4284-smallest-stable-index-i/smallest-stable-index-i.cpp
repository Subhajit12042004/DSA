class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int premax = nums[0];
     
        for(int i=0; i<n; i++){
            premax=max(premax,nums[i]);

            int postmin= INT_MAX;
            for(int j=i; j<n; j++){
                postmin=min(postmin,nums[j]);
            }
            int s = premax - postmin;
            if(s<=k){
                return i;
            }
        }




        return -1;
        
    }
};