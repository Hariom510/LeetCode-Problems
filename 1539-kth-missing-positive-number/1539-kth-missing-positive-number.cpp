class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        for(int i=0, n=1; n<=1000; n++){
            if(i<arr.size() && arr[i]==n){
                i++;
            }
            else if(--k==0){
                return n;
            }
        }
        return 1000+k;
    }
};