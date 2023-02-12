class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n= nums.size();
       int sum=0,res=0,total=0;
        map<int, int> m;
        vector<int> pre(n);
        for(int i=0; i<n; i++){
            total += nums[i];
            pre[i] = total;
        }
        int j=0,i=0;
        while(j<n){
            if(pre[j]==goal)res++;
            
            if(m.find(pre[j]-goal) != m.end()){
               res += m[pre[j]-goal];   
            }
            
            m[pre[j]]++;
            j++;
        }
        return res;
    }
};