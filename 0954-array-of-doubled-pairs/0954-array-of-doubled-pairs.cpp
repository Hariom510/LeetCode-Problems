class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        map<int, int> m;
        for(auto i: arr){
            m[i]++;
        }
        sort(arr.begin(), arr.end());
        for(auto num: arr){
            if(m[num] && m[num*2]){
                m[num]--;
                m[num*2]--;
            }
        }
        
        
        // if(m.size())return false;
        for(auto i:m){
            if(i.second)return false;
        }
        
        return true;
    }
};