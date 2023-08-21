class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        // int m = b.size();
        // int res = 0;
        // string x = "";
        // while(x.size() <= m){
        //     x += a;
        //     res++;
        // }
        // cout<<"x is "<<x;
        // int n = x.size();
        // for(int i=0; i<= (n-m); i++){
        //     string temp = "";
        //     for(int j=i; j<(i+m); j++){
        //        temp += x[j]; 
        //     }
        //      cout<<"temp is "<<temp<<endl;
        //     if(temp == b)return res;
        // }
        // return -1;
        
        int count =0;
        string s = "";
        while(s.size() < b.size()){
            s += a;
            count++;
        }
        if(s.find(b)!= string::npos ){
            return count;
        }
        
        s += a;
        count++;
        if(s.find(b)!= string::npos ){
            return count;
        }
        
        return -1;
           
    }
};