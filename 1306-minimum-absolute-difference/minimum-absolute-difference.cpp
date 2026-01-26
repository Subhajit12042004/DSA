class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>ans;
        int miniDif =INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i =0; i<n-1; i++){
            
            int currDif =( arr[i+1] -arr[i]);
            if(currDif < miniDif){
                miniDif = currDif;
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});


            }
            else if(miniDif == currDif){
                ans.push_back({arr[i],arr[i+1]});


            }

        }

        return ans;

        
    }
};