class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       map<int, int> m;
        for(auto i: arr1){
            m[i]++;
        }
        int pos =0;
        for(auto val: arr2){
           while(m[val]-- >0) arr1[pos++] = val;
        }
        for(auto it: m){
            while(it.second-- >0) arr1[pos++] = it.first;
        }
        return arr1;
        
    }
};