class Solution {
public:
    //this will not work.for value >=103
//     bool isUgly(long long int i){
//         while(i%2==0)i/=2;
//         while(i%3==0)i/=3;
//         while(i%5==0)i/=5;
//         if(i==1)return true;
        
//         return false;
//     }
    
    int nthUglyNumber(int n) {
      // int cnt=0;
      //   for(long long int i=1; i<1691; i++){
      //       int c = isUgly(i);
      //       if(c){
      //           n--;
      //           if(n==0)return i;
      //       }  
      //   }
        //x, y and z for multiples of 2, 3 and 5 respectively.
        int x=0,y=0,z=0;
        vector<int> v(n);
        v[0]=1;
        for(int i=1; i<n; i++){
            v[i]= min(2*v[x],min(3*v[y],5*v[z]));
            if(v[i]==2*v[x])x++;
            if(v[i]==3*v[y])y++;
            if(v[i]==5*v[z])z++;
        }
        return v[n-1];
        
    }
};