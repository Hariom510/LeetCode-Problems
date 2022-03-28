class Solution {
public:
    bool isPerfectSquare(int num) {
        // Please remeber this logic.
        int i=1;
        while(num>0){
            num -= i;
            i += 2;
            if(num ==0) return true;
        }
        return false;
    }
};