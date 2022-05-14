class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x< 0)
            return false;
        
       long int num = x , rev=0, rem=0;
        while(x > 0){
            rem = x%10;
            rev = rem + rev*10 ;
            x = x/10;
        }
        
        
        
        
        
        if(num == rev)
            return true;
        else return false; 
    }
};