class Solution {
public:
    int romanToInt(string s) {
        int n  = s.size();
        int r =0;
        unordered_map<char,int>mpp{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for(int i=0; i<n-1; i++){
            if(mpp[s[i]] < mpp[s[i+1]]){
                r-=mpp[s[i]];
            }else{
                r+=mpp[s[i]];
            }
        }

        return r+mpp[s[n-1]];
        
    }
};