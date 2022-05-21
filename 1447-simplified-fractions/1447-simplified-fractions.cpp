class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                if(__gcd(i,j) == 1){
                   //string s = to_string(i/j);
                    string n1 = to_string(i);
                    string n2 = to_string(j);
                    string s = "";
                    s+= n1;
                    s+= "/";
                    s+= n2;
                    v.push_back(s);
                }
            }
        }
        return v;
    }
};