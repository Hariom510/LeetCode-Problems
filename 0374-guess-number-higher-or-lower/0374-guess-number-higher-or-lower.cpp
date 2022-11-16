/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // int res = guess(n);
        int maxi=n,mini=1;
        while(true){
            int mean = (maxi-mini)/2 +mini;
            int res = guess(mean); //api call
            if(res==1){
               mini = mean+1; 
            }
            else if(res==-1){
               maxi = mean-1; 
            }
            else{
                return mean;
            }
        }
        
        
        return 0;
    }
};