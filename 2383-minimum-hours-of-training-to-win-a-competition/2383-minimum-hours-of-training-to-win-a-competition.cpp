class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int hr =0;
        int sum =0;
        int x = initialExperience;
        for(int i=0; i<experience.size(); i++){
            if( x > experience[i]){
                x += experience[i];
            }
            else{
                hr++;
                x++; 
                i--;
            }
        }
        for(auto i: energy) sum += i;
        if(sum>= initialEnergy){
            hr += (sum-initialEnergy)+1;
        }
        return hr;
    }
};