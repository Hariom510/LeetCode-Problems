// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int res=0;
        for(int i=1;i<=n; i++){
            bool x = isBadVersion(i);
            res++;
            if(x==true)break;
        }
        return res;
    }
};