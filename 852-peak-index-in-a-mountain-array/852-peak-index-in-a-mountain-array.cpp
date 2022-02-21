class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi = arr[0];
        int idx =0;
        for(int i=0; i<arr.size(); i++){
            maxi = max(maxi, arr[i]);
            
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == maxi){
                idx = i;
            }
        }
        return idx;
    }
};