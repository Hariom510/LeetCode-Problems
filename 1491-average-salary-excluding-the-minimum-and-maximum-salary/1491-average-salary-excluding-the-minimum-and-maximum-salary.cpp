class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        double avg =0;
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0; i<salary.size(); i++){
            avg += salary[i];
            mini = min(mini, salary[i]);
            maxi = max(maxi, salary[i]);
        }
        ans = (avg-mini-maxi)/(salary.size()-2) ;
        return ans;
    }
};