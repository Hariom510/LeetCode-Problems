class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> m;
        int maxi = -1;
        int n= arr.size();
        for(auto num: arr){
            m[num]++;
        }
        for(int i=0; i<n; i++){
            if(arr[i] == m[arr[i]]){
                maxi = max(maxi, arr[i]);
            }
        }
        return maxi;
    }
};