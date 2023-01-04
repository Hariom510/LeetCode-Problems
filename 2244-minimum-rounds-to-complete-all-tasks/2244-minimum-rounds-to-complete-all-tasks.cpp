class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> m;
        for(auto i: tasks)m[i]++;
        vector<int> v;
        for(auto i: m)v.push_back(i.second);
        int op=0;
        
        for(int i=0; i<v.size(); i++){
            if(v[i]==1)return -1;
            else if(v[i]==2 || v[i]==3)op++;
            
            else{
                while(v[i]>1){
                    if(v[i]%3 ==2 || v[i]%3==0){
                        v[i] = v[i]-3;
                        op++;
                    }
                    else if(v[i]%2 ==1 || v[i]%2 ==0){
                        v[i] = v[i]-2;
                        op++;
                    }
                    // else if(v[i]==1)return -1;
                }
            }
        }
        return op;
    }
};