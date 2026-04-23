class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long>ans(n,0);
        unordered_map<int, long long>count,sum;

        for(int i=0; i<n; i++){
            int x = nums[i];
            ans[i]+=(long long) count[x]*i-sum[x];
            count[x]++;
            sum[x]+=i;


        }
        count.clear();
        sum.clear();

        for(int j=n-1; j>=0; j--){
            int x=nums[j];
            ans[j]+=sum[x]-(long long)count[x]*j;
            count[x]++;
            sum[x]+=j;
        }

        return ans;
        
    }
};