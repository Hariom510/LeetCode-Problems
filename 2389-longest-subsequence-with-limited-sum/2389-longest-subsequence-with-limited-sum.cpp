class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        sort(nums.begin(),nums.end());
        vector<int> pre(n);
        int total=0;
        for(int i=0; i<n; i++){
           total += nums[i];
            pre[i] = total;
        }
        vector<int> ans(m);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(pre[j]<=queries[i]) ans[i] = j+1;
                else break;
            }
        }
        return ans;
    }
};