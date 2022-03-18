class Solution {
public:
    bool checkZeroOnes(string s){
        int zeroes =0;
        int ones =0;
        int max0 = 0;
        int max1 =0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                ++ones;
                max1 = max(max1, ones);
            }
            else{
                ones =0;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                ++zeroes;
                max0 = max(max0, zeroes);
            }
            else{
                zeroes =0;
            }
        }
        if(max1>max0) return true;
        
        return false;
         
    }
};