class Solution {
public:
    bool checkOnesSegment(string s) {
        //there should not be 01 continuously
        for(int i=1; i<s.size(); i++){
            if(s[i-1] =='0' && s[i] == '1')
                return false;
        }
        return true;
    }
};