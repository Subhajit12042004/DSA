class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int ans = 0;


        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]) cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);

        vector<pair<char,char>> pairs = {
            {'a','b'}, {'a','c'}, {'b','c'}
        };

        for(auto [x,y] : pairs){
            unordered_map<int,int> mp;
            int diff = 0;
            mp[0] = -1;

            for(int i = 0; i < n; i++){
                if(s[i] == x) diff++;
                else if(s[i] == y) diff--;
                else {
                    diff = 0;
                    mp.clear();
                    mp[0] = i;
                    continue;
                }

                if(mp.count(diff))
                    ans = max(ans, i - mp[diff]);
                else
                    mp[diff] = i;
            }
        }


        unordered_map<long long,int> mp;
        mp[0] = -1;

        int a = 0, b = 0, c = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'a') a++;
            else if(s[i] == 'b') b++;
            else c++;

            int diffAB = a - b;
            int diffAC = a - c;

            long long key = ((long long)diffAB << 32) ^ diffAC;

            if(mp.count(key))
                ans = max(ans, i - mp[key]);
            else
                mp[key] = i;
        }

        return ans;
    }
};
