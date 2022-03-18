class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;
        char ans;
        for(auto i: t){
            m[i]++;
        }
         for(auto i: s){
            m[i]--;
        }
        for(auto it:m){
            if(it.second==1)
                ans = it.first;
        }
        return ans;
    }
};