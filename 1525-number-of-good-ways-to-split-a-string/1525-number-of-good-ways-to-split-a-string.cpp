class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        //i dont know why set is not working here
        set<int> s1;
        map<char, int> m;
        vector<int> pre(n), suff(n);
        for(int i=0; i<n; i++){
            s1.insert(s[i]);
            // m[s[i]]++;
            pre[i]= s1.size();
        }
        s1.clear();
       
        for(int i=n-1; i>=0; i--){
            s1.insert(s[i]);
            // m[s[i]]++;
            suff[i]=s1.size();
        }
        // cout<<s2.size();
        int res=0;
        for(int i=0; i<n-1; i++){
            if(pre[i]==suff[i+1])res++;
        }
        return res;
        
//         int n = str.length();
        
//         vector<int> pref(n), suff(n);
        
//         map<char, int> freq;
        
//         for(int i = 0; i < n; i++)
//         {
//             freq[str[i]]++;
//             pref[i] = freq.size();
//         }
        
//         freq.clear();
        
//         for(int i = n -1; i >= 0; i--)
//         {
//             freq[str[i]]++;
//             suff[i] = freq.size();
            
//         }
       
//         int ans = 0;
//         for(int i = 1; i < (n); i++)
//         {
//             if(pref[i - 1] == suff[i])
//                 ans++;
//         }
        
//         return ans;
    }
};