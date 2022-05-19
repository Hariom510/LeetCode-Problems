class Solution {
public:
    string multiply(string num1, string num2) {
        
        if (num1 == "0" || num2 == "0") return "0";
         int n1 = num1.size();
         int n2 = num2.size();
        //please remember this logic
        vector<int> v(n1+n2, 0);
        for(int i= n1-1; i>=0; --i){
            for(int j= n2-1; j>=0; --j){
                v[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                v[i+j] += v[i+j+1]/10;
                v[i+j+1] %= 10;
            }
        }
        //for removing leading zeroes
        int i=0;
        while(i<v.size() && v[i] ==0) ++i;
        
        //for converting int vector to sting
        string res = "";
        while(i<v.size()) res.push_back(v[i++]+'0');
        
        return res;
    }
};