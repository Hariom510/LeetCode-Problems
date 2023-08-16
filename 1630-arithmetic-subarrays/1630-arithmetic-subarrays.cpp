class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v;
        int n = nums.size();
        int m = l.size();
        for(int i=0; i<m; i++){
            vector<int> v1;
            for(int j=l[i]; j<=r[i]; j++){
                v1.push_back(nums[j]);
            }
            sort(v1.begin(), v1.end());
            int res = v1[1]-v1[0];
            int flag=0;
            for(int k=1; k<v1.size()-1; k++){
                if((v1[k+1]-v1[k]) != res){
                    v.push_back(false);
                    flag=1;
                     break;
                }
            }
            if(flag==0)v.push_back(true);
        }
        return v;
    }
    
};