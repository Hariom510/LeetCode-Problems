class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int> s1, s2;
        vector<int> v;
        // v.push_back(0);
        for(int i=0; i<A.size(); i++){
            s1.insert(A[i]);
            // s2.insert(B[i]);
            int cnt=0;
            for(int j=0; j<=i; j++){
                if(s1.find(B[j])!=s1.end()){
                    cnt++;
                }
            }
             v.push_back(cnt);
        }
        // 
        return v;
    }
};