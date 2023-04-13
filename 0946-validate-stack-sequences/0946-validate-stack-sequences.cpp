class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j=0;
        bool res = true;
        for(int i=0; i<pushed.size(); i++){
            st.push(pushed[i]);
            
            while(!st.empty() && popped[j]==st.top()){
                st.pop();
                j++;
            }
            if(i==pushed.size()-1 && j<popped.size()){
                res = false;
            }
        }
        return res;
    }
};