class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sz = operations.size();
        
        int X = 0;
        for(int i =0; i<sz; i++){
            if(operations[i] == "--X" || operations[i] == "X--")
                X = X-1;
            else if(operations[i] == "++X" || operations[i] == "X++")
                    X = X+1;
        }
        return X;
        
        
        
    }
};