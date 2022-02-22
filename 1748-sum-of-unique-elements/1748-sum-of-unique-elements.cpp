class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> m;
        //finding frequency of all elements
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int sum =0;
        for(auto i: m){
            if(i.second == 1){
                sum += i.first;
            }
        }
        return sum;
    }
};