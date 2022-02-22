class Solution {
public:
    int findNumbers(vector<int>& nums) {
       
        int evenNum =0;
        if(nums.size() ==0) return 0;
        for(int i=0; i<nums.size(); i++){
            int rem;
             int countDigit =0;
        
            while(nums[i]!= 0){
                rem = nums[i]%10;
                countDigit++;
                nums[i] /= 10;
            }
            if(countDigit%2 ==0){
                evenNum++;
            }
        }
        return evenNum;
    }
};