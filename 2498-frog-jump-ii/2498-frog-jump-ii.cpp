class Solution {
public:
    int maxJump(vector<int>& stones) {
        int  n = stones.size();
       //we have to assign them at alternate position
        //special case: when only two stones are there
        int res = stones[1]-stones[0];
        for(int i=2; i<n; i++){
            res = max(res, stones[i]-stones[i-2] );
        }
        return res;
    }
};