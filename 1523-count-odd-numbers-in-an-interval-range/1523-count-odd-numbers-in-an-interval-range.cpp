class Solution {
public:
    int countOdds(int low, int high) {
        int cnt =0;
        int l=low,r=high;
        if(l&1){
            cnt++;
            l += 2;
            while(l<=r){
               cnt++;
                l += 2;
            }
        }
        else{
            l++;
            while(l<=r){
                cnt++;
                l+=2;
            }
        }
        return cnt;
    }
};