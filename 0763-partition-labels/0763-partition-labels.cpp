class Solution {
public:
    //Please rem this sol
    vector<int> partitionLabels(string s) {
        int n=s.size();
        map<char, int> m;
        for(int i=0; i<n; i++){
            m[s[i]] = i;
        }
        int maxi=0,prev=-1;
        vector<int> v;
        for(int i=0; i<n; i++){
            maxi= max(maxi, m[s[i]]);
            if(i==maxi){
               v.push_back(maxi-prev);
                prev = maxi;
            }
        }
        return v;
    }
};