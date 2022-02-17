
bool isSelf(int num){
    int originalnum = num;
    int rem;
    while(num>0){
        rem = num%10;
        if(rem ==0 || originalnum%rem != 0){
            return false;
        }
        num = num/10;
    }
    return true;   
}


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        
        for(int i=left; i<=right; i++){
            if(i<=9){
                v.push_back(i);
            }
            else{
               if(isSelf(i))
                   v.push_back(i);
            }
        }
        return v;
    }
};



