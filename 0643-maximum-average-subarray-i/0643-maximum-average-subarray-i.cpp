class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;
        double maxi = INT_MIN;
        int n= nums.size();
        int j=0,i=0;
        //sliding window
        while(j<n){
            sum += nums[j++];
            
            if(j-i==k){
               maxi = max(maxi, sum);
                // cout<<sum<< " ";
                sum -= nums[i++];
            }
        }
        return maxi/k ;
        
        
        // for(int i=0; i<n; i++){
        //     if(i<k){
        //         sum += nums[i];
        //     }
        //     else{
        //         res = max(res, sum);
        //         sum += nums[i]-nums[i-k];
        //     }
        // }
        // res = max(res, sum);
        // return res/k;
    }
};