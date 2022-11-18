class Solution {
public:
    bool isUgly(int n) {
        
        // for(int i=2; i<6 && n; i++){
        //     while(n%i ==0){
        //         n = n/i;
        //     }
        // }
        // if(n==1) return true;
        // return false;
        if(n==0)return false;
       while(n%2==0) n = n/2;
        while(n%3==0) n = n/3;
        while(n%5==0) n = n/5;
    
    if(n==1)return true;
        return false;
       
        
    }
};