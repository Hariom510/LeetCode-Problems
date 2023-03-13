class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
//         int maxi = arr[0];
//         int idx =0;
//         for(int i=0; i<arr.size(); i++){
//             maxi = max(maxi, arr[i]);
            
//         }
//         for(int i=0; i<arr.size(); i++){
//             if(arr[i] == maxi){
//                 idx = i;
//             }
//         }
//         return idx;
        int n = arr.size();
        int l=0,r=n-1;
        int maxi = arr[0];
        while(l<=r){
           int mid = l + (r-l)/2;
            if(arr[mid]>arr[mid+1]){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l;
        
    }
};