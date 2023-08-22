class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1 = 0, rev2 = 0;
        int x = num;
        while(x){
            rev1 = rev1*10 + x%10;
            x = x/10;
        }
        while(rev1){
            rev2 = rev2*10 + rev1%10;
            rev1 = rev1/10;
        }
        
        return rev2 == num;
        
    }
};