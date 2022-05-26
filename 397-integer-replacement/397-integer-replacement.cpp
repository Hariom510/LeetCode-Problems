class Solution {
     int res=0;
public:
    int integerReplacement(int n){
       
        
        if(n ==1) return res;
        
        if(n == 3) {
            res+= 2;
             return res;
        }
        
        if(n ==INT_MAX) return 32;
        
        if(n&1){   // for odd
            res++;   
            if((n+1)%4 == 0){             //rem this logic.
                integerReplacement(n+1);
            }
            else{
               integerReplacement(n-1);
            }
        }
        else{          // for even
            res++;
            integerReplacement(n/2);
        }
        return res;
        
    }
};