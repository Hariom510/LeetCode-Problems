class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int> pq;
        int n = stones.size();
        for(auto i: stones){
            pq.push(i);
        }
        
        while(n>1){
            int x= pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            n -= 2;
            if(x-y>0){
                pq.push(x-y);
                n +=1;
            }
        }
        if(pq.size()!=0)return pq.top();
        return 0;
    }
};