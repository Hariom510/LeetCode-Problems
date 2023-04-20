class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip=0;
        while(start || goal){
            
            //if both bits are not equal
            if(start%2 != goal%2){
                flip++;
            }
            
            start = start/2;
            goal = goal/2; 
        }
        return flip;
    }
};