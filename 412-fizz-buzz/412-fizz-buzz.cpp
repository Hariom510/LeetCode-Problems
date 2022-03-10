class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        string three = "Fizz";
        string five = "Buzz";
        string both = "FizzBuzz";
        
        for(int i=1; i<=n; i++){
            if(i%3 ==0 && i%5 !=0){
                v.push_back(three);
            }
            else if(i%3 !=0 && i%5 ==0){
                v.push_back(five);
            }
            else if(i%3 ==0 && i%5 ==0){
                v.push_back(both);
            }
            else{
                string st = to_string(i);
                v.push_back(st);
            }
        }
        return v;
    }
};