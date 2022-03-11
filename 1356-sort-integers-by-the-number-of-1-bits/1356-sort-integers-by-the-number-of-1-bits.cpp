class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<pair<int, int>> v(arr.size(), pair(0,0));
        
        for(int i=0; i<arr.size(); i++){
            int count =0;
            v[i].second = arr[i];
            int k= arr[i];
            while(k!=0){
                if(k%2 == 1) count++;
                
                k= k/2;
            }
            v[i].first = count;
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        for(int i=0; i<v.size(); i++){
            ans.push_back(v[i].second);
        }
        return ans;
        
    }
};