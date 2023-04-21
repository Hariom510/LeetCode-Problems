class Solution {
public:
    int findComplement(int num) {
        vector<int> v;
        while(num>0){
            v.push_back(!(num%2));
                num /= 2;
        }
        // for(int i=0; i<v.size(); i++)
        // cout<<v[i]<<" ";
        int res=0;
        for(int i=v.size()-1; i>=0; i--){
            res = 2*res + v[i];
        }
            return res;
    }
};