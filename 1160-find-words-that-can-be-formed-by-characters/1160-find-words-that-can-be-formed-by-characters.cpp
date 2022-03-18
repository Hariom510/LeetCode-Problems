class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> m,p;
        int count=0;
        
        for(auto i: chars){
            m[i]++;
        }
        
        for(int i=0; i<words.size(); i++){
            bool val = 1;
            p=m;          //very important line.
            for(int j=0; j<words[i].size(); j++){
                p[words[i][j]]--;
                if(p[words[i][j]] <0){
                    val=0;
                    break;
                }
            }
            if(val){
                count += words[i].size();
            }
        }
      
        return count;
    }
};