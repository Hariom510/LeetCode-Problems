class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n= arr.size();
        
        for(int i=0; i<n-2; i++){
            int j=i+1;
            int k= i+2;
            while(j<n-1 && k<n){
                if(arr[i]%2 != 0 && arr[j]%2 != 0 && arr[k]%2 != 0){
                    return true;
                }
                else{
                    break;
                }
            }
        }
        return false;
    }
};