class Solution {
public:
    //this is the best greedy problem
    int jump(vector<int>& nums) {
       int n = nums.size();
        int farthest=0,jump=0,current=0;
        for(int i=0; i<n-1; i++){
           farthest = max(farthest, i+nums[i]);
            
            if(i==current){
                current = farthest;
                jump++;
            }
            if(current==n-1)break;
        }
        return jump;
    }     
};