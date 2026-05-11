class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
       
        for(int i=0; i<n; i++){
            vector<int>q;
            while(nums[i]>0){
               
                q.push_back(nums[i]%10);
                nums[i]= nums[i]/10;
            }
            reverse(q.begin(), q.end());
            for(int j=0; j<q.size(); j++){
                ans.push_back(q[j]);
            }
        }

        return ans;
    }
};