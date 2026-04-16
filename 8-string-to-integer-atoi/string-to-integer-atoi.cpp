class Solution {
public:
int helper(string s, int i, long long num, int sing){
    if(i>=s.size() || !isdigit(s[i])) return (int)(num*sing);
   
    num=num*10+(s[i]-'0');
    if(num*sing >=INT_MAX) return INT_MAX;
    if(num*sing <=INT_MIN) return INT_MIN;

    return helper(s, i+1, num, sing);
}
    int myAtoi(string s) {
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        int sing =1;
        if(i<s.size()  && s[i]=='+' ||  s[i]=='-'){
            sing=(s[i]=='-')?-1:1;
            i++;
        }

        return helper(s, i, 0, sing);
        
    }
};