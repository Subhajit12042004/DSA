class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();
        int count =0;
        for(int i=0; i<n-m; i++){
            if(arr[i] == arr[i+m]){
                count++;
                if(m*(k-1)==count){
                    return true;
                }
            }else{
                count =0;
            }
        }

        return false;
        
    }
};