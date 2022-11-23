class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        
        int i=0, j=0;
        int time=0;
        while(i<n&&j<n){
            int maxi=0;
           while(colors[i]==colors[j] && j<n){
               time += neededTime[j];
               if(neededTime[j]>maxi) maxi = neededTime[j];
               j++;
           }
            time -= maxi;
            i=j;
        }
        
        return time;
    }
};