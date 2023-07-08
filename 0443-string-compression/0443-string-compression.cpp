class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0,j=0; 
        
        while(j<n){
            chars[i] = chars[j];
            int cnt =0;
            while(j<n && chars[j]==chars[i]){
                cnt++;
                j++;
            }
             if(cnt>1){
                 string count = to_string(cnt);
                 for(auto it: count){
                     chars[++i] = it;
                 }
                 ++i;
                
             }
            else{
                ++i;
            }
            
        }
        
        return i;
        
        
    }
};