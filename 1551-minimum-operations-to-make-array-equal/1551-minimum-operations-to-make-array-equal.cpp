class Solution {
public:
    int minOperations(int n) {
       //rememeer the logic
        
        if(n&1){  //if n is odd
           int x = (n-1)/2;
            return x*(x+1);
        }
        else{
            int x = n/2;
            return x*x;
        }
        
        return 0;
    }
};