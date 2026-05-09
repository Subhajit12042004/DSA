class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        int number =-1;
        int maxi =INT_MIN;
        unordered_map<int,int>mp;
        for(int i=0; i<n;i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;

            }
        }
        for(auto it:mp){
           if(it.second >maxi || (it.second == maxi && it.first < number)){
            maxi = it.second;
            number =it.first;
           }
        }
        return number;
    }
};