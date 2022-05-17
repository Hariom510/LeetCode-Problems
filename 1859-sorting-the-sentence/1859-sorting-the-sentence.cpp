class Solution {
public:
    string sortSentence(string s) {
        string str ="";
        
        vector<string> res(10);
        
        for(int i=0; i<s.size(); i++){
            if(!isdigit(s[i])) str += s[i];
            else{
                res[s[i]-'0'] = str+" ";
                str = "";
                i++;
            }
        }
        for(auto i:res) str += i;
        str.pop_back(); //for removing last space
        return str;
        
    }
};