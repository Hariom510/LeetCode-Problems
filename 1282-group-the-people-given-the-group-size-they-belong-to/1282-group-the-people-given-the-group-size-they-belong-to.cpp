class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        for(int i=1; i<= *max_element(groupSizes.begin(), groupSizes.end()); i++){
            vector<int> temp;
            for(int j=0; j<groupSizes.size(); j++){
                if(i==groupSizes[j]){
                    if(temp.size()==i){
                        ans.push_back(temp);
                        temp.clear();
                    }
                    temp.push_back(j);
                }
            }
            if(temp.size()>0)ans.push_back(temp); 
        }
        return ans;
    }
};