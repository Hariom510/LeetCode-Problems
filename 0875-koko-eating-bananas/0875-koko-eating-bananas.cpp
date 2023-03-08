class Solution {
    
public:
   
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1, right=1000000000;
        while(left<=right){
            int mid = left + (right-left)/2;  //k
            if(solve(piles,h,mid))right = mid-1;
            else left = mid+1;
        }
        return left;
    }
    
     bool solve(vector<int>& piles, int h, int k){
        long long int hours=0;
        for(int pile:piles){
            int div = pile/k;
            hours += div;
            if(pile%k !=0 ) hours++;
        }
        return hours<=h;   //time will be less if mid (k) is greater 
    }
};