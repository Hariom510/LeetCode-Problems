class Solution {
   
        
public:
    struct comp{
       bool operator()(int a, int b){
            string s1 = to_string(a) + to_string(b);
             string  s2 = to_string(b) + to_string(a);
            return s1>s2;   //when this will false then swap will happen
        }
   } cmpr;
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmpr);
        if(nums[0]==0) return "0";
        
        string res ="";
        for(auto n: nums){
            res = res+ to_string(n);
        }
        
        return res;
    }
};