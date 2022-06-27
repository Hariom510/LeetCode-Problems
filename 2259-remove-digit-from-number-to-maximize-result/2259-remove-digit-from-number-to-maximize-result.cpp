class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxi="";
        int n = number.size();
        for(int i=0; i<n; i++){
            if(number[i]==digit){
                string temp = number.substr(0,i) + number.substr(i+1);
                maxi = max(maxi, temp);
            }
        }
        return maxi;
    }
};