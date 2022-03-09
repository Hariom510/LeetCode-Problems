class Solution {
public:
    double trimMean(vector<int>& arr) {
        double avg;
        sort(arr.begin(), arr.end());
        int n= arr.size();
        int x = (5*n)/100;
        
        arr.erase(arr.begin(), arr.begin()+x);
        while(x){
            arr.pop_back();
            --x;
        }
        for(int i=0; i<arr.size(); i++){
            avg += arr[i];
        }
        return avg/arr.size() ;
    }
};