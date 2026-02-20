class Solution {
public:
    string makeLargestSpecial(string s) {
        string res="";
        vector<string>v;
        int cnt =0;
        int i=0;

        for(int j=0; j<s.size(); j++){
            if(s[j]=='1'){
                cnt++;
            }else{
                cnt--;
            }

            if(cnt==0){
                v.push_back("1" + makeLargestSpecial(s.substr(i+1, j-i-1))+ "0");
                i= j+1;

            }

        }
                    sort(v.rbegin(), v.rend());
            for(int k=0; k<v.size(); k++){
                res+=v[k];
            }

            return res;
        
    }
};