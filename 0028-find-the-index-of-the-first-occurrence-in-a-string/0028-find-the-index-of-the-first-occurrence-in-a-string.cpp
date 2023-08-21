class Solution {
public:
    int strStr(string haystack, string needle) {
        // map<string, int> mp;
        // m.insert({needle, 1});
        int n = haystack.size();
        int m = needle.size();
        if(m>n)return -1;
        for(int i=0; i<n; i++){
            string temp = "";
            for(int j=i; j<n && j<(i+m); j++){
                temp += haystack[j];
            }
            cout<<"temp is "<<temp<<endl;
            if(temp==needle)return i;
        }
        
        return -1;
    }
};