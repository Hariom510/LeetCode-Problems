class Solution {
public:
    string reversePrefix(string word, char ch) {
         string ans = "";
        int idx;
        int n = word.size();
       for (int i= 0; i<n; i++){
           if(ch == word[i]){
             idx = i;
               break;
    }
           else if(i==n-1){
               if(ch != word[i]) return word;
           }
           }
        if(idx >= 0){
       int k =0;
        int j= idx;
     while(j>=k){
         swap(word[k], word[j]);
         k++;
         j--;
     }
           }
           
   return word;     
    }
};