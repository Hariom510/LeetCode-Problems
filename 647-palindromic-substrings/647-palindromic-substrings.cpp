class Solution {
public:
    int countSubstrings(string s) {
        int ans =0;
        int n= s.size();
        for(int i=0; i<n; i++){
            string temp = "";
             temp += s[i];
            for(int j=i+1; j<n; j++){
                temp += s[j];
                string t = temp;
                reverse(t.begin(), t.end());
                if(temp == t){
                    ans++;
                }
            }
        }
        
        
        ans += n;
        return ans;
    }
};