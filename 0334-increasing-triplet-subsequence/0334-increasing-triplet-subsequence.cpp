class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
        
        int c1 = INT_MAX;
        int c2 = INT_MAX;
        
        for(auto num: nums){
            if(num<=c1){
                c1 = num;
            }
            else if(num<=c2){   //this num will be greater than c1
                c2 = num;
            }
            else{           //this num will be greater than c1 and c2
                return true;
            }
        }
        return false;
    }
};