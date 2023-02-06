class Solution{
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int j=0,i=0;
        int m[2] ={0};
        // for(char c: blocks)m[c]++;
        int cnt=0;
        int mini = INT_MAX;
        while(j<n){
            if(blocks.at(j++)=='W'){
               m[1]++; 
            }
            else{
                m[0]++;
            }
            
            if(j-i==k){
               cnt = m[1];
               mini = min(cnt, mini);
                
              if(blocks.at(i++) == 'W'){
                m[1]--;
              }
              else{
                    m[0]--;
              }
            }   
        }
        return mini;
    }
};