class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, bool> m;
        for(auto i: allowed){
            // if(!m[i])
            m[i] = 1;
        }
        int count =0;
        for(auto x: words){
            bool flag =1;
            for(auto y: x){
                if(m.find(y)== m.end()){
                    flag =0;
                    break;
                }
                    
            }
            if(flag ==1) count++;
        }
        return count;  
    }
};