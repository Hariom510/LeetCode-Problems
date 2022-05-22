class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> m1;
        
        
        for(auto i: s){
            m1[i]++;
        }
        for(auto i: t){
            m1[i]--;
        }
        
        int count =0;
        for(auto val: m1){
            if(val.second<0 || val.second>0){
                count += abs(val.second);
            }
        }
        
        return count;
    }
};