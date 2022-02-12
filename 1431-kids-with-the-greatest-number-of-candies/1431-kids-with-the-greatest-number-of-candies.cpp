class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr;
        int maxcandy = 0;
        //max candy in given array
        for( int i=0; i<candies.size(); i++){
          maxcandy = max(candies[i], maxcandy);
        }
                   for(int j=0; j<candies.size(); j++){
                        if(candies[j]+extraCandies >= maxcandy) 
                        arr.push_back(true);
                    else
                      arr.push_back(false);
                        
                   }
                  
        return arr;
    }
};