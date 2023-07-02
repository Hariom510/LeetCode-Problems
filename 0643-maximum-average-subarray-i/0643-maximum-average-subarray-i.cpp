class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        double sum=0;
        int n= nums.size();
        int i=0, j=0;
        while(i<n && j<n){
            sum += nums[j++];
           if((j-i)==k){
               ans = max(ans, sum);
               sum -= nums[i++];
           } 
        }
        
        return ans/k;
    }
};