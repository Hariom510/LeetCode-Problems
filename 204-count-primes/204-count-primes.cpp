class Solution {
public:
    int countPrimes(int n) {
        //Please remember this seive of eratothones method.
        vector<bool> prime(n+1, true);
        prime[0] = false;
        prime[1] = false;
        for(int i=2; i*i<=n; i++){
            if(prime[i]){
                for(int j= i*i; j<=n; j+= i){
                    prime[j] = false;
                }
            }
        }
        
        //count the primes
        int countPrime =0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                countPrime++;
            }
        }
        
        return countPrime;
    }
};