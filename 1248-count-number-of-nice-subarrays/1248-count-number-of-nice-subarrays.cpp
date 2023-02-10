class Solution {
public://Prefix sum
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n; i++){
            if(nums[i]&1)nums[i]=1;
            else nums[i]=0;
        }
        int j=0,res=0;
        long long int sum =0;
        unordered_map<int, int> m;
        while(j<n){
            sum += nums[j++];
            
            if(sum==k)res++;  //this can be replaced my m[0]=1;
            if(m.find(sum-k)!=m.end()){   //let total sum is: sum and first 3 numbers sum is x and sum-x==k then check for sum-k  (this is great logic pls rem)
                res+= m[sum-k];
            }
            
            m[sum]++;
        }
        return res;
    }
};