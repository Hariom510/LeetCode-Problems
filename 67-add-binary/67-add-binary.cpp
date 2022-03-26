class Solution {
public:
    string addBinary(string a, string b) {
        int carry =0;
        string ans ="";
        int alen = a.size();
        int blen = b.size();
        int i= alen-1;
        int j= blen -1;
        
        while(i>=0 || j>=0 || carry){
            int sum =0;
            int x=0;
            if(i>=0){
                x += a[i]-'0';
                i--;
            }
            int y=0;
            if(j>=0){
                y += b[j]-'0';
                j--;
            }
            sum = (x+y+carry)%2;
            ans = to_string(sum)+ ans;
            carry = (x+y+carry)/2;
        }
        return ans;
    }
};