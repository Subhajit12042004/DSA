class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        int x = INT_MAX;
        for(auto &it : freq){
            x = min(x, it.first);
        }

        int FreqX = freq[x];

        int y = INT_MAX;
        for(auto &it : freq){
            if(it.first > x && it.second != FreqX){
                y = min(y, it.first);
            }
        }

        if(y == INT_MAX) return {-1, -1};

        return {x, y};
    }
};