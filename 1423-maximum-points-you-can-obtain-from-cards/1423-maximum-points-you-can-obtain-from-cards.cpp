class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
        vector<int> presum(n);
        long long int sum=0,ans=0,total=0;
        for(int i=0; i<n; i++){
            total += cardPoints[i];
            presum[i] = total;
        }
        if(k==n)return total;
        int i=0,j=n-k-1;
        while(j<n){
            if(i==0)sum = total-presum[j];
            else sum = total-presum[j]+presum[i-1];
            ans = max(ans,sum);
            j++;
            i++;
        }
        return ans;  
    }
};