class Solution {
public:
    int nextGreaterElement(int n) {
        string digits = to_string(n);
        next_permutation(begin(digits), end(digits));
        int val = stoll(digits);
        
        if(val>INT_MAX || val <= n)return -1;
        
        return val;
        
    }
};