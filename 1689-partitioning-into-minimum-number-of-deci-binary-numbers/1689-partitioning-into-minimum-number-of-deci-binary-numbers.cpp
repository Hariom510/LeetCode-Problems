class Solution {
public:
    int minPartitions(string n) {
       char maximum = '0';
        for(int i=0; i<n.size(); i++){
           maximum = max(maximum,n[i]);
        }
        return (maximum -'0');
    }
};