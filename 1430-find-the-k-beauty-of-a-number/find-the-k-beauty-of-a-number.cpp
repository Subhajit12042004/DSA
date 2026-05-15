class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s;
        s = to_string(num);
        int cnt=0;
        for(int i=0; i<s.size()-k+1; i++){
            string temp = s.substr(i,k);
            int val = stoi(temp);
            if(val !=0 && num%val==0){
                cnt++;
            }
        }
return cnt;
     
    }
};