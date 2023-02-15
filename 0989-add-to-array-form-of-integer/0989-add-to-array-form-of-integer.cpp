class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> v;
        // unsigned long long int ans;
        int n = num.size();
        int i = n-1;
        while(i>=0 || k>0){
            if(i>=0){
                v.push_back((num[i]+k)%10);
                k = (num[i]+k)/10;
            }
            else{
                v.push_back(k%10);
                k = k/10;
            }
            i--;
        }
        
        reverse(v.begin(), v.end());
        return v;
        
    }
};