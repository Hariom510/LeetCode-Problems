class Solution {
public:
    int balancedStringSplit(string s) {
        int countl = 0, countr = 0, ans =0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'L'){
                countl++;
            }
            else {
                countr++;
            }
            if (countl == countr){
                ans++;
            }
        }
        return ans;
    }
};