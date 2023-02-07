class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n= arr.size();
        int j=0,i=0,cnt=0;
        double sum =0.0,avg=0.0;
        while(j<n){
            sum += arr[j++];
            
            if(j-i==k){
                avg = sum/k;
                if(avg>=threshold)cnt++;
                sum -= arr[i++];
            }
        }
        return cnt;
    }
};