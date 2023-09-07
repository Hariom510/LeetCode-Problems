class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        
        while(n>0){
            int sum =0;
            while(n>0){
                sum += (n%10)*(n%10);
                n /= 10;
            }
            
            if(sum==1){
                return true;
            }
            else if(sum==89){
                return false;
            }
            
            n = sum;
        }
        
        return false;
    }
};