class Solution {
public:
    int solve(int n){
        if(n<=1)return n;
        
        return solve(n-1)+solve(n-2);
    }
    
    
    int fib(int n) {
        int res = solve(n);
        return res;
        
        
        // if(n<=1)return n;
        // int prev2=0, prev1=1;
        // int res;
        // for(int i=2; i<=n; i++){
        //     res = prev1+prev2;
        //     prev2 = prev1;
        //     prev1 = res;
        // }
        // return prev1;
    }
};