class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v;
        int n = boxes.size();
        
        for(int i=0; i<n; i++){
            int op=0;
            for(int j=0; j<n; j++){
                if(boxes[j]=='1'){
                    op += abs(j-i);
                }
            }
            v.push_back(op);
        }
        
        return v;
        
    }
};