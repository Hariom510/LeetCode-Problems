class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> m;
        int n = arr.size();
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        vector<int> frequencies;
        for(auto [_, freq]: m){
            frequencies.push_back(freq);
        }
        sort(frequencies.begin(), frequencies.end());
        //we try to remove element with maxm frequencies first
        
        int ans=0, removed=0,half= (n/2), i=frequencies.size()-1;
        while(half > removed){
            ans += 1;
            removed += frequencies[i--];
        }
        
        
        return ans;
        
    }
};