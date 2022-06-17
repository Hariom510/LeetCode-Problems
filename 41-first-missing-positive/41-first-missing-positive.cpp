class Solution {
public:
    int firstMissingPositive(vector<int>& nums) { 
        unordered_set<int> s;
        int n= nums.size();
        
        for(auto num:nums){
            s.insert(num);
        }
        for(int i=1; i<=INT_MAX; i++){
            if(s.find(i)==s.end()){
               return i;
            }
        }
        // jjuugg
        //avbvgj nnhh
        return 0;

    }
};