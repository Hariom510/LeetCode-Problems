class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
       //add 0 at begininning and at last of array
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        int sz = flowerbed.size();
        for(int i=1; i<sz-1; i++){
            if(flowerbed[i-1] + flowerbed[i]+ flowerbed[i+1] ==0){
                n--;
                // flowerbed[i]=1;
                i++;
            }
          
           
        }
        
        return n<=0 ? true : false;
        
        
//          flowerbed.insert(flowerbed.begin(),0);
//         flowerbed.push_back(0);
//         for(int i = 1; i < flowerbed.size()-1; ++i)
//         {
//             if(flowerbed[i-1] + flowerbed[i] + flowerbed[i+1] == 0)
//             {
//                 --n;
//                 ++i;
//             }
                
//         }
//         return n <=0;
    }
};