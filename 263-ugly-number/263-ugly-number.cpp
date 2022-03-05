class Solution {
public:
    bool isUgly(int n) {
        
        for(int i=2; i<6 && n; i++){
            while(n%i ==0){
                n = n/i;
            }
        }
        if(n==1) return true;
        return false;
    }
};