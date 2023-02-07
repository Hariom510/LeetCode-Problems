class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> m;
        int n = fruits.size();
        int j=0,i=0;
        int maxi = INT_MIN;
        while(j<n){
            m[fruits[j]]++;
            
            while(m.size()>2){
               if(m[fruits[i]]==1){
                  m.erase(fruits[i]); 
               }
                else{
                    m[fruits[i]]--;
                }
                i++;
            }
            
            maxi = max(maxi, j-i+1);
            j++;   
        }
        return maxi;
    }
};