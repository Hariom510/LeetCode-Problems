class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       
        int n = nums.size();
        if(n<=1)return 0;
        sort(nums.begin(), nums.end());
         int mini = INT_MAX;
        int j=0,i=0;
        while(j<n){
            if(j-i+1<k)
            j++;
            
            if(j-i+1==k){
                int x = (nums[j]-nums[i]);
                mini = min(mini,x);
                i++;
                j++;
            }
        }
        
        return mini;
    }
};