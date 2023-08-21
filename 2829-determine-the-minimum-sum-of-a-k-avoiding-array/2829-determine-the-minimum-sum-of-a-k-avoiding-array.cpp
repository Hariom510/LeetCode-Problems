class Solution {
public:
    int minimumSum(int n, int k) {
        set<int> s;
        int i=1;
        int ans =0;
        while(n>0){
            if(s.find(i) == s.end()){   // if i is not add it to ans
                s.insert(k-i);  // k-i should not be added further
                ans += i;
                n--;
            }
            i++;
        }
        
        return ans;
    }
};