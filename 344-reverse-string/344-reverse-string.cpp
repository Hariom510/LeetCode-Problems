class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<int> v;
        for(int i=n-1; i>=0; i--){
            v.push_back(s[i]);
        }
        s.clear();
         for(int i=0; i<n; i++){
            s.push_back(v[i]);
        }
        
    }
};