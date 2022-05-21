class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> m;
        
        for(auto i: arr){
            m[i]++;
        }
        priority_queue<int, vector<int>, greater<int>> q;
        for(auto i: m){
            q.push(i.second);
        }
        
        while(k>0){
            k -= q.top();
            if(k>=0){
                q.pop();
            }
        }
        
        return q.size();
    }
};