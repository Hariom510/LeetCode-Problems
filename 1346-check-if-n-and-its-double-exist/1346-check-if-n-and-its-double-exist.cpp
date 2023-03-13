class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> m;
        
        for(int i=0; i<arr.size(); i++){
           if(m.find(2*arr[i])!=m.end())return true;
            
           if(arr[i]%2==0 &&  m.find(arr[i]/2)!=m.end()){
               return true;
           }
            m[arr[i]]++;
        }
        return false;
    }
};