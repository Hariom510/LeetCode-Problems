class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) { 
        // vector<int> v;
        int c1=0,c2=0;
        unordered_map<int,int> m;
        for(auto i: nums){
            m[i]++;
        }
        for(auto i:m){
            c1+= i.second/2;
            c2 += i.second%2;
        }
        
        
        return {c1,c2};  
    }
};