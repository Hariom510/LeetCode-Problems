class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> v;
        unordered_map<string, int> m;
        for(int i=0; i<list1.size(); i++){
            m[list1[i]] = i;
        }
       int minSum = INT_MAX;
        for(int i=0; i<list2.size();i++ ){
            
            if(m.find(list2[i])!= m.end()){
                if(m[list2[i]] +i <minSum){
                    minSum = m[list2[i]] +i;
                    v.clear();
                    v.push_back(list2[i]);
                    
                }
                else if(m[list2[i]] +i == minSum){
                    v.push_back(list2[i]);
                }
            }
        }
        return v;
    }
};