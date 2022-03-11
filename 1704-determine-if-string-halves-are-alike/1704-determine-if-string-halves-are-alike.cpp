class Solution {
public:
    bool halvesAreAlike(string s) {
        int n= s.size();
        int mid = n/2;
        int count1=0, count2=0;
        for(int i=0; i<mid; i++){
            s[i] = tolower(s[i]);
            if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
                count1++;
        }
         for(int i=mid; i<n; i++){
            s[i] = tolower(s[i]);
            if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
                count2++;
        }
        return count1==count2;
    }
};