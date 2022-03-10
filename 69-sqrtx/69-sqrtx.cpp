class Solution {
public:
    int mySqrt(int x) {
        // please remember this newtons method
        long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
    }
};