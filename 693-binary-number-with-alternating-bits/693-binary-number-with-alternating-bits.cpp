class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        vector<int> v;
        
        for(int i=0; n>0; i++){
            v.push_back(n%2);
            n = n/2;
        }
        int sz = v.size();
        for(int i=1; i<sz; i++){
            if(v[i] == v[i-1])
                return false;
        }
        return true;
    }
};