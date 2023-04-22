class Solution {
public:
    int binaryGap(int n) {
        int d=0;
        int maxi=0;
        vector<int> v;
        while(n>0){
            v.push_back(n%2);
            n /= 2;
        }
        for(auto i: v){
            cout<<i<< " ";
        }
        int x=0,y=0;
        for(int i=0; i<v.size(); i++){
           if(v[i]==1){
               for(int j=i+1; j<v.size(); j++){
                   if(v[j]==1){
                     maxi = max(maxi, j-i);
                     break; 
                   }
                   
               }
           } 
        }
        return maxi;
    }
};