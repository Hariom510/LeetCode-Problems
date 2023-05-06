class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        
        for(int i=0;i<nums.size(); i++){
            m[nums[i]]++;
        }
        // map<int, int>:: iterator it;
        // for(it = m.begin(); it!= m.end(); it++){
        //     if(it->second >= 2)
        //         return it->first;
        // }
        
        for(auto i: m){
            if(i.second >=2){
                return i.first;
            }
        }
        
        // for(auto i=m.begin(); i!=m.end(); i++){
        //     if(i->second >=2)
        //         return i->first;
        // }
        return 0;
        }
};