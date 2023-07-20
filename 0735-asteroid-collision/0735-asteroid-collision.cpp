class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        //Very complicated solution.
        int n = asteroids.size();
        stack<int> s;
        vector<int> v;
        for(int i=0; i<n; i++){
            if(asteroids[i]>0){
                s.push(asteroids[i]);
                // cout<<asteroids[i] << " ";
            }
            else{
                while(!s.empty() && s.top()>0 && (s.top())<abs(asteroids[i])){
                    s.pop();
                }
                
                if(!s.empty() && (s.top())==abs(asteroids[i])){
                    s.pop();
                }
                else{
                    if(s.empty() || s.top()<0)
                    s.push(asteroids[i]);
                }
            }
        }
        int x = s.size();
        for(int i=0; i<x; i++){
            v.push_back(s.top());
            // cout<<s.top()<<" ";
            s.pop();
        }
        
        reverse(v.begin(), v.end());
        return v; 
    }
};