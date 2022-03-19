class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        set<pair<int,int>> s;
        s.insert({0,0});
        
        for(auto i: path){
            if(i =='N') y++;
            else if(i =='S') y--;
            else if(i =='E') x++;
            else x--;
            
            if(s.find({x,y})!= s.end()){
                return true;
            }
            else{
                s.insert({x,y});
            }
        }
        return false;
    }
};