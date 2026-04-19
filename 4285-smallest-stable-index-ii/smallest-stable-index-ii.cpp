class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int n = nums.size();
        int premax = nums[0];
        vector<int>maxarr;
        vector<int>minarr;
     
        for(int i=0; i<n; i++){
            premax=max(premax,nums[i]);
            maxarr.push_back(premax);
            // maxarr[i]=premax;

        }
        int postmin =INT_MAX;
        for(int i=n-1; i>=0; i--){
            postmin = min(postmin,nums[i]);
            minarr.push_back(postmin);
        }
        reverse(minarr.begin(),minarr.end());

        for(int i=0; i<n; i++){

            int diff = maxarr[i]-minarr[i];
            if(diff<=k){
                return i;
            }
        }
        return -1;
    }
};