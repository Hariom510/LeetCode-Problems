class Solution {
public:
    int getSum(int a, int b) {
        // return a+b;
        vector<int> v{a,b};
        return accumulate(v.begin(), v.end(), 0);
    }
};