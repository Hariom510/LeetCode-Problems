class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        // int total=0;
        for(int i=1; i<INT_MAX; i++){
            int total = i;
           for(int j=0; j<n;j++){
               total += nums[j];
               if(total<1)break;
               if(j==n-1 && total >=1) return i;
           }
        }
        return 0;   
    }
};