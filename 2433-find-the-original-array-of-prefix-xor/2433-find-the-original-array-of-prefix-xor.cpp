class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n= pref.size();
        vector<int> v(n);
        v[0]= pref[0];
        for(int i=n-1; i>=1; i--){
            v[i] = pref[i]^pref[i-1];
        }
        return v;
    }
};