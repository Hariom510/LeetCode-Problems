class Solution {
public:
    string removeDuplicates(string s, int k) {
        // int n = s.size();
        // for(int i=0; i<n; i++){
        //     if(i-1>0 && i-2>0){
        //         if(s[i]==s[i-1] && s[i-1]==s[i-2]){
        //             s.erase(i-2, i);
        //         }
        //     }
        // }
         
        //by using stack
        vector<pair<char, int>> st;
        
        for(char ch: s){
           if(st.empty() || st.back().first != ch){
               st.push_back({ch, 1});
           }
            else if(++st.back().second == k){
                    st.pop_back();
                }
        }
        string res;
        for(auto i: st){
            res.append(i.second, i.first);
        }
        return res;
    }
};