class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n= blocks.size();
        int w= 0, l=0, cnt=0, newblocks=INT_MAX;
        for(int r=0; r<n; r++){
            if(blocks[r]=='W'){
                cnt++;
            }
            if(r-l+1==k){
                newblocks= min(newblocks,cnt);

                if(blocks[l]=='W'){
                cnt--;
                }
                l++;

            }
        }
        return newblocks;
    }
};