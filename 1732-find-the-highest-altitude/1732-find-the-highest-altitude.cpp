class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n= gain.size();
        // vector<int> pre(n);
        int total =0;
        int ans = 0;   //Not INT_MIN because 0 is added at front a/c to question
        for(int i=0; i<n; i++){
            total += gain[i];
            // pre[i] = total;
            ans = max(ans, total);
        }
        // for(int i=0; i<n; i++){
        //     ans = max(ans, pre[i]);
        // }
        
        return ans;
        
    }
};