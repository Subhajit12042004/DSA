class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            int count =0;
            for(int j =0; j<n; j++){
                if(bulbs[j]==bulbs[i]){
                    count++;

                }
            }
            if(count%2!=0 &&
                find(ans.begin(), ans.end(), bulbs[i]) == ans.end()){
                ans.push_back(bulbs[i]);
            }

        }
        sort(ans.begin(), ans.end());

        return ans;
        
    }
};