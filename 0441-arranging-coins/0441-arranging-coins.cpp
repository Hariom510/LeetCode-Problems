class Solution {
public:
    int arrangeCoins(int n) {
        long long sum=0;
        for(int i=1; i<=INT_MAX; i++){
          sum += i;
            if(sum==n)return i;
            else if(sum>n)return i-1;
        }
        return 0;
    }
};