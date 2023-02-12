class Solution {
public:
    int pivotInteger(int n) {
        int total =0,preSum=0;
        for(int i=1; i<=n; i++){
            total += i;
        }
        
        for(int i=1; i<=n; i++){
            preSum += i;
            if(total-preSum+i==preSum)return i;
        }
        
        
        // for(int i=1; i<=n; i++){
        //     int sum = (i*(i+1))/2;
        //     int x=0;
        //     for(int j=i;j<=n; j++){
        //         x += j;
        //     }
        //     if(sum==x)return i;
        // }
        return -1;
    }
};