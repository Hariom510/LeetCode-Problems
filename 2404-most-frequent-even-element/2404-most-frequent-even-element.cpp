class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
         map<int, int> m;   //keys are stored in sorted order
        for(auto num: nums){
            if(num%2==0)
            m[num]++;
        }
        int maxi=INT_MIN;
        for(auto i:m){
            maxi = max(maxi, i.second);
        }
        for(auto i:m){
            if(i.second == maxi){
                return i.first;
            }
        }
        
        // priority_queue<pair<int,int>> q;
        // for(auto val: m){
        //     q.push({val.second, val.first});
        // }
        // while(k--){
        //     v.push_back(q.top().second);
        //     q.pop();
        // }
        return -1;
    }
};