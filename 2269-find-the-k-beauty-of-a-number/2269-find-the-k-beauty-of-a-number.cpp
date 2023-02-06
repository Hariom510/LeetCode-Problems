class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size(),j=0,i=0;
        string temp="";
        int cnt=0;
        while(j<n){
            temp += s[j++];
            
            if(j-i==k){
               int x = stoi(temp);
                if(x>0 && num%x==0)cnt++;
                
                temp.erase(0,1);
                i++; 
            }
        }
        
        return cnt;
    }
};