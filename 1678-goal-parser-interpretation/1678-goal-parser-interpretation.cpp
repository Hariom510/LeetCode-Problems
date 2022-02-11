class Solution {
public:
    string interpret(string command) {
        string str;
        string ans;
        for(int i=0; i<command.size(); i++){
            if(command[i] == '(' || command[i] == ')' || command[i] == 'a'
               || command[i] == 'l'  ){
            str.push_back(command[i]);
            if(str == "()")
                {ans += "o";
                str = "";}
            if(str == "(al)")
               { ans += "al";
                str = ""; }
               
            continue;
                
            }
            ans.push_back(command[i]);
              
        }
        return ans;
    }
};