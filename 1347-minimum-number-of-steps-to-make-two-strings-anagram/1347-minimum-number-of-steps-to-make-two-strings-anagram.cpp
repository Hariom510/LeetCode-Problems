class Solution {
public:
    int minSteps(string s, string t) {
        int count =0;
        unordered_map<char, int> m;
        
        for(auto val: s){
            m[val]++;
        }
        for(auto val: t){
            m[val]--;
        }
        for(auto i: m){
            if(i.second<0){
                count += i.second;
            }
        }
        return abs(count);
    }
};