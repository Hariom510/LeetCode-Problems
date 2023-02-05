class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      int s_len = s.size();
        int p_len = p.size();
        if(p_len>s_len)return {};
        
        //Sliding Window Approach.
         vector<int> freq(26,0);
         vector<int> window(26,0);
        vector<int> v;
        for(int i=0; i<p_len; i++){
            freq[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(freq==window)v.push_back(0);
        
        for(int i= p_len; i<s_len; i++){
            window[s[i-p_len]-'a']--;
            window[s[i]-'a']++;
            
            if(freq==window)v.push_back(i-p_len+1);
        }
        return v;
        
        // i don't know why below code is not working.
        // vector<int> v;
        // int m[26]={0};
//         for(char c: s)m[c-'a']++;
//         int j=0,i=0,total_chars=p.size();
//         while(j<n){
//             if(m[s.at(j++) - 'a']-- >0 ) total_chars--;
                
//              if(total_chars==0)v.push_back(i);
            
//             //Window sliding
//             if(j-i==p.size() && m[s.at(i++)-'a']++ >=0) total_chars++;
               
//         }
//         return v;
    }
};