class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n>1){
            while(n%3 ==0){
                n = n/3;
            }
        }
        //nh
        return n==1;
    }
};