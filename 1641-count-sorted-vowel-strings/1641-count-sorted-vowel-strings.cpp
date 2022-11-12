class Solution {
public:
    int countVowelStrings(int n) {
        int a=0,e=0,i=0,o=0,u=1;
        
        // if(n==1)return 5;
        for(int j=0;j<n;j++){
            o += u;
            i += o;
            e += i;
            a += e;
        }
        return a+e+i+o+u;
    }
};