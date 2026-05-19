class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(),nums1.end());
        for(int i=0; i<nums2.size(); i++){
            if(set1.contains(nums2[i])){
                return nums2[i];
            }
        }

        return -1;
    }
};