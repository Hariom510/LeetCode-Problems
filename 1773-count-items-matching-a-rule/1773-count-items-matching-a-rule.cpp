class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count =0;
        int t;
        if(ruleKey == "type")
        t = 0;
        else if(ruleKey == "color")
           t = 1;
        else t=2;
        
        for(int i=0; i<items.size(); i++){
            if(items[i][t] == ruleValue)
                count++;
                
        }
        return count;
    }
};