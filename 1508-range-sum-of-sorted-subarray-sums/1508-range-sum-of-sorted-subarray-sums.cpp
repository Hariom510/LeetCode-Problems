class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        for(int i=0; i<n; i++){
            int pre=0;
            for(int j=i; j<n; j++){
                pre += nums[j];
                v.push_back(pre);
            }
        }
        
        sort(v.begin(), v.end());
        // for(int i=0; i<v.size(); i++)
        //     cout<< v[i]<<" ";
        long long res=0;
        for(int i=left-1; i<=right-1; i++){
            res += v[i];
            res = res;
        }
        return res%1000000007;
    }
};