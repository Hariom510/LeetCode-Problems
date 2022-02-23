class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> v;
        int x = -1;
        int n = arr.size();
        if(n==1){
            v.push_back(x);
            return  v;
        } 
        
        for(int i=0; i<n-1 ; i++){
            int maxi = INT_MIN;
            for(int j= i+1; j<n; j++ ){
                maxi = max(maxi, arr[j]);
                
            }
            v.push_back(maxi);
            
        }
        v.push_back(x);
        return v;
    }
};