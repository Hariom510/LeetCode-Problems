class Solution {
public:
    int maximumSum(vector<int>& nums){
        int maxi =-1;
        int n=nums.size();
        vector<int> v;
        vector<pair<int,int>> p;
        for(int i=0; i<n; i++){
            int x =0;
            int y= 0;
            y = nums[i];
            while(y!=0){
                x += y%10;
                y = y/10;
            }
             v.push_back(x);
        }
        
        for(int i=0; i<n; i++){
             p.push_back(make_pair(v[i],nums[i]));
        }
       
        sort(p.begin(), p.end());
       for(int i=1; i<n; i++){
           if(p[i].first == p[i-1].first){
               maxi = max(maxi, (p[i].second+ p[i-1].second));
           }
       }
        
        return maxi;
    }
};