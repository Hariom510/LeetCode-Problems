class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> v(n,-1);
        stack<int> s;  //for storing index
        // sort(nums.begin(), nums.end());
        for(int i=0; i<2*n; i++){
            int val = nums[i%n];  //for 2 times looping
            while(!s.empty() && val>nums[s.top()]){
                v[s.top()] = val;
                s.pop();
            }
            if(i<n)s.push(i);
            
        }
        return v;
    }
};