class Solution {
public:
    int tribonacci(int n) {
        int a=0, b=1, c=1;
        int index =3;
        int sum =0;
       if(n==0) return 0;
        
       else if(n<=2) return 1;
        
        else{
           
            while(index<=n){
                sum = a+b+c;
                index++; 
                a=b;
                b=c;
                c=sum;
                
            }
            return sum;
        }
        return 0;
    }
};