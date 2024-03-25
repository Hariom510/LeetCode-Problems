class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> m;
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
            
        }
        
        map<int,int>:: iterator it;
         for(it = m.begin(); it!= m.end(); it++){
            if(it->second >= 2)
               v.push_back(it->first);
        }
        
        
        return v;
        
    }
};