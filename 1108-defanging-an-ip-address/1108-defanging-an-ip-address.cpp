class Solution {
public:
    string defangIPaddr(string a) {
        string str2="[.]";  
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]=='.') 
            {
                a.erase(a.begin() + i); 
                a.insert(i, str2);  
                i=i+2;  //added 2 extra characters
            }
        }
        return a;
    }
};