class Solution {
public:
    bool checkIfPangram(string sentence) {
         set<int>st;
    for(int it : sentence) st.insert(it);
    return st.size() >= 26;
    }
};