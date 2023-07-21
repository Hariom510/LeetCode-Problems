class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> m1, m2;
        int n= nums.size();
        for(auto i: nums){
            m2[i]++;
        }
        
        for(int i=0; i<n; i++){
            int f1 = ++m1[nums[i]];  //left side frequency
            int f2 = --m2[nums[i]];   //right side frequency
            
            if(f1*2>(i+1) && f2*2>(n-i-1)){
                return i;
            } 
        }
        return -1;
    }
};