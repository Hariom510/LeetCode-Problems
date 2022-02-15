class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sz = arr.size();
        int sum=0;
         
        for(int i=0; i<sz; i++){
            for(int j=i; j<sz; j+=2){
                {
                    for(int k=i; k<=j; k++)
                        sum += arr[k];
                }
                
            }
        }
        return sum;
    }
};