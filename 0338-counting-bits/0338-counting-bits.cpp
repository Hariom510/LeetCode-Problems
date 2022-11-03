class Solution {
public:
    
    
    vector<int> countBits(int n) {
//         vector<int> v;
//          vector<int> dp(n+1, -1);
        
//         for(int i=0; i<=n; i++){
            
//             int remSum =0;
//             int num =i;
//             while(num!= 0){
                
//                 remSum += num%2;
//                 num /= 2;
//             }
//             v.push_back(remSum);
//         }
//         return v;
        
        //memoization
        vector<int> dp(n+1, 0);
        for(int i=1; i<=n; i++){
            dp[i] = i%2 + dp[i/2];
        }
        return dp;
        
    }
};