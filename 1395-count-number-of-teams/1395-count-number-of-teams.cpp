class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n =rating.size();
    
        //this will give TLE
        // int res=0;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<i;j++){
        //        for(int k=0; k<j; k++){
        //            if((rating[i]>rating[j] && rating[j]>rating[k])||
        //              (rating[i]<rating[j] && rating[j]<rating[k]))
        //                res++;
        //        }
        //     }
        // }
        // return res; 
        
        //just remember the below logic
        int res=0;
        for(int i=1; i<n-1; i++){
            int leftSmall=0, leftLarge=0, rightSmall=0, rightLarge=0;
          for(int j=0; j<i; j++){
              if(rating[j]<rating[i])leftSmall++;
              if(rating[j]>rating[i])leftLarge++;
          }
            for(int j=i+1; j<n; j++){
              if(rating[j]<rating[i])rightSmall++;
              if(rating[j]>rating[i])rightLarge++;
          }
            
            res += leftSmall*rightLarge + rightSmall*leftLarge;
        }
        return res;
    }
};