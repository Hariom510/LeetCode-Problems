class Solution {
public:
    int addMinimum(string word) {
        int n= word.size();
        int i=0,res=0,count=0;
        while(i<n){
            if(i<n && word[i]=='a'){
                count++;
                i++;
            }
            if(i<n && word[i]=='b'){
                count++;
                i++;
            }
            if(i<n && word[i]=='c'){
                count++;
                i++;
            }
            res += 3-count;
            count=0;
        }
        return res;
    }
};