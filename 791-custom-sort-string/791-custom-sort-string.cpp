class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> m;
        for(auto i: s){
            m[i]++;
        }
        string str = "";
        for(auto i: order){
            if(m.find(i) != m.end()){
                str += string(m[i], i);  //string stl is used here
                m.erase(i);
            }
        }
        
        //remaining elements added here
        for(auto i: m){
            str += string(i.second, i.first);
        }
        
        return str;
    }
};