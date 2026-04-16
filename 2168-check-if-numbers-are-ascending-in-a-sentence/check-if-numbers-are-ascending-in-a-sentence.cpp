class Solution {
public:
    bool areNumbersAscending(string s) {
      int i=0;
        int prev=-1;
        while(i<s.size()){
             
            if(isdigit(s[i])){
                int curr =0;
                while(i<s.size() && isdigit(s[i])){
                    curr=curr*10+(s[i]-'0');
                    i++;
                }

                if(curr <= prev)return false;
                prev=curr;
            }else{
                i++;
                }
        }



        return true;
        
    }
};