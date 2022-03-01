class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        
        for(int i=0; i<=n; i++){
            
            int remSum =0;
            int num =i;
            while(num!= 0){
                
                remSum += num%2;
                num /= 2;
            }
            v.push_back(remSum);
        }
        return v;
    }
};