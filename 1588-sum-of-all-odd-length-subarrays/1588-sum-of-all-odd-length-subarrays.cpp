class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int total=0;
        vector<int> pre(n+1);
        for(int i=0; i<n; i++){
            total += arr[i];
            pre[i+1] = total;  
        }
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+2; j<n; j+=2){
                ans += pre[j+1]-pre[i];
            }
        }
        ans += total;
        return ans;
        
         //brute force applied.
//         for(int i=0; i<sz; i++){
//             for(int j=i; j<sz; j+=2){
//                 {
//                     for(int k=i; k<=j; k++)
//                         sum += arr[k];
//                 }
                
//             }
//         }
        // return sum;
    }
};