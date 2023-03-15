class Solution {
public:
    bool solve(vector<int>& weights,int mid, int days){
        int noOfDays=1,sum=0;
        for(int i=0; i<weights.size(); i++){
           if(sum+weights[i]<=mid) sum+=weights[i];
            else{
                noOfDays++;
                sum=weights[i];
            }
        }
        if(noOfDays<=days)return true;
        return false;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low,high;
        int n = weights.size();
        int ans;
        low=0;
        for(int i=0; i<n;i++){
            low = max(low, weights[i]);
            high += weights[i];
        }
        while(low<=high){
            int mid = (low+high)/2;
            //to check no. of days is possible
            if(solve(weights, mid, days)){
                ans = mid;
                high = mid-1;
            }
            else{
               low = mid+1; 
            }
        }
        return ans;
    }
};