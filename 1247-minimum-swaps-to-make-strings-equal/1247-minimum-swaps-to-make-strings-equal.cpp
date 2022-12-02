class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int x=0,y=0;
        //greedy approach
        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]){
               s1[i]=='x' ? x++: y++;
            }
        }
        if((x+y)%2)return -1; 
        
        int ans = (x+y)/2;
        if(x%2)ans++;
        return ans;
        
    }
};