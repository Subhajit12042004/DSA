class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int row[26];

    
        for(char ch : string("qwertyuiop")) row[ch - 'a'] = 1;
        for(char ch : string("asdfghjkl")) row[ch - 'a'] = 2;
        for(char ch : string("zxcvbnm")) row[ch - 'a'] = 3;

        vector<string> ans;

        for(string word : words) {
            int r = row[tolower(word[0]) - 'a'];
            bool valid = true;

            for(char ch : word) {
                if(row[tolower(ch) - 'a'] != r) {
                    valid = false;
                    break;
                }
            }

            if(valid) ans.push_back(word);
        }

        return ans;
    }
};