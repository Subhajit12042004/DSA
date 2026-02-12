class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k =2;
        int n = fruits.size();
        int l=0, r=0, maxlen =0; 
        unordered_map<int,int>mp;

        while(r<n){
            mp[fruits[r]]++;
            if(mp.size()>k){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }

                l++;
            }
            if(mp.size()<=2){
                maxlen = max(maxlen, r-l+1);
            }
            r++;

        }

        return maxlen;
    }
};