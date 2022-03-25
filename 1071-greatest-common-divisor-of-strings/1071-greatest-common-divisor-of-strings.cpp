class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // gcd of two number is obtained by dividing the larger number by a smaller number and get the last divisior.
        int n1 = str1.size();
        int n2 = str2.size();
        return (str1+str2 == str2+str1) ? str1.substr(0, gcd(n1,n2)): "";
    }
};