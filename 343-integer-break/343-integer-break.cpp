class Solution {
public:
    int integerBreak(int n) {
          //please remember this method
        long value =1;
        
        if(n==2) return 1;
        if(n==3) return 2;
        if(n==4) return 4;
        
        while(n-3 >= 2){
            value = value*3;
            n = n-3;
        }
        value = value*n;
        return value;
        
    }
};