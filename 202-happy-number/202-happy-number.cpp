class Solution {
public:
    bool isHappy(int n) {
        if(n ==1)
            {return true;}
        
        else{
        while(n>0){
            int rem=0,sqr=0;
            
            while(n!=0){
               rem = n%10;
                sqr += rem*rem;
                n = n/10;
            }
            if(sqr == 1){
                return true;
            }
            else if(sqr == 89){
                return false;
            }
            else{
                n = sqr;
            }
        }
        }
        
        return false;
        
    }
};