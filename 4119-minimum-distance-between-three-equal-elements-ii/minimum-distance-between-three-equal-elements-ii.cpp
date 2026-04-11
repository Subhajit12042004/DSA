class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return -1;

        unordered_map<int, vector<int>> mp;
        int minidis = INT_MAX;

        // ✅ Instead of inner loop, store indices once
        for(int i = 0; i < n; i++){
            mp[nums[i]].push_back(i);
        }

        // ✅ Now process each value (no n^2 loop)
        for(auto &it : mp){
            vector<int> &ans = it.second;

            if(ans.size() >= 3){
                for(int k = 0; k <= ans.size() - 3; k++){
                    int a = ans[k];
                    int c = ans[k + 2];

                    int sum = 2 * (c - a);   // optimized formula
                    minidis = min(minidis, sum);
                }
            }
        }

        return (minidis == INT_MAX) ? -1 : minidis;
    }
};