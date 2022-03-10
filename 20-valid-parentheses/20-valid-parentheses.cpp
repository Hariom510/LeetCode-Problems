class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;
        for(auto ch: s){
            switch(ch){
                case '{':
                case  '[':
                case '(' : stk.push(ch); break;
                case '}' : if(stk.empty() || stk.top() != '{')return false;
                    else stk.pop();
                    break;
                case ']' :if(stk.empty() || stk.top() != '[')return false;
                    else stk.pop();
                    break;
                case ')' :if(stk.empty() || stk.top() != '(')return false;
                    else stk.pop();
                    break;
            }
        }
        return stk.empty();
    }
};