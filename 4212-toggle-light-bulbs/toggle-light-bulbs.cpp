class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int, int>freq;
        for(int x : bulbs){
            freq[x]++;
        }
    vector<int>ans;
        for(auto it : freq){
            if(it.second %2!=0){
                ans.push_back(it.first);
            }
        }
    sort(ans.begin(), ans.end());
        return ans;
        
    }
};