class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int count =0;
        if(n<3) return 0;
        int i=0, j=1, k=2;
        while(i<j && j<k && k<n){
            if(s[i] != s[j] && s[j] != s[k] && s[i] != s[k])
                count++;
            
            i++;
            j++;
            k++;
        }
       return count;
        
    }
};