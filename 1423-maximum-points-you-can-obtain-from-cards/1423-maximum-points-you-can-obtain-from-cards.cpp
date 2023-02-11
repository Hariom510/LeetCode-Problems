class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
        
        long long int sum=0,ans=0;
        vector<int> presum(n);
        presum[0]=cardPoints[0];
        for(int i=1; i<n; i++){
            presum[i] = cardPoints[i]+presum[i-1];
        }
        for(int i=0; i<n; i++){
            cout<<presum[i]<<" ";
        }
        if(k==n)return presum[n-1];
        long long int total = presum[n-1];
        int i=0,j=n-k-1;
        while(j<n){
            if(i==0)sum = total-presum[j];
            else sum = total-presum[j]+presum[i-1];
            
            ans = max(ans,sum);
            // sum -= presum[i];
            j++;
            i++;
        }
        return ans;  
    }
};