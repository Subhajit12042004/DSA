class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       
        int n = nums.size();
        if(n<3)return -1;
        int minidis =INT_MAX;
        for(int i=0; i<n; i++){
             vector<int>ans;
            int cnt=0;
            int sum=0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){    
                    ans.push_back(j);
                }
                if(ans.size()>=3){
                    int k=ans.size();
                    int a=ans[k-3];
                    int b=ans[k-2];
                    int c=ans[k-1];
                // sum =abs(a-b)+abs(b-c)+abs(c-a);
                sum=2*(c-a);
                minidis= min(minidis,sum);

                }
               
            }
        }
        return (minidis==INT_MAX)?-1:minidis;
        
    }
};