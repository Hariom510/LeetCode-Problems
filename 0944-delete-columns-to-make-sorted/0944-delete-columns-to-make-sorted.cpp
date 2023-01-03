class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int x = strs[0].size();
        int cnt=0;
        for(int k=0; k<x; k++){
            
            for(int i=0; i<n-1; i++){
                if(strs[i+1][k]<strs[i][k]){
                    cnt++;
                    break;
                }
            }
        }
       
        return cnt;
    }
};