class Solution {
public:
    int subtractProductAndSum(int n) {
        int prd=1, sum=0,rem;
        while(n>0){
            rem = n%10;
            sum += rem;
            prd *= rem;
            n = n/10;
        }
        int result = (prd - sum);
        return result;
    }
};