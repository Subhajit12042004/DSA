class Solution {
public:
    int minPartitions(string n) {
        int ret = 0;
        for(int i = 0; i < n.size(); i++){
            ret = max(ret, n[i] - '0');
        }
        return ret;
    }
};