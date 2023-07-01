class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        // int i=0, j= n-1;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]==0 && nums[j]!=0){
        //             swap(nums[i], nums[j]);
        //             break;
        //         }
        //     }
        // }
        
         int a =0;
         for(int i=0; i<n; i++){
           if(nums[i]!=0){
              swap(nums[a], nums[i]);
               a++;
           }
             
        }
    }
};