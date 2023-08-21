class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        //maxm substring posssible will be n/2 and minm will be 1, so
        
        for(int i=n/2; i>=1; i--){
            string temp = s.substr(0, i);
            string res = "";
            if(n%i==0){ //only in this case temp concat to give s
                for(int j=1; j<=n/i; j++){
                    res+= temp;
                }
                if(res==s)return true;
            }
        }
        return false;
    }
};