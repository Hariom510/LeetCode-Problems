class Solution {
public:
    bool rotateString(string s, string goal) {
        int n= s.size();
        int i=0;
        while(i<n){
             s.insert(s.end(), s[0]);
            s.erase(s.begin());
            if(s == goal) return true;
            
            i++;
        }
           
        
        return false;
    }
};