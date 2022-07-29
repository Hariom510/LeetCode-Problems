class Solution {
    //please rem it. reference: striver recursion playlist.
   void findcombi(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& v ){
        if(ind==arr.size()){
            if(target ==0){
                ans.push_back(v);
            }
            return;
        }
        //pick the element
        if(arr[ind]<=target){
            v.push_back(arr[ind]);
            findcombi(ind, target-arr[ind], arr, ans, v);
            v.pop_back();
        }
        //not pick
        findcombi(ind+1, target, arr, ans, v);
        
    }
    
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        findcombi(0, target, candidates, ans, v);
        return ans;
        
    }
};