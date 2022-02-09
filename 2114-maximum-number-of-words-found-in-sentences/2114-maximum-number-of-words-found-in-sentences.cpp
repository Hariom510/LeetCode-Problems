class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int max =0;
        int sz = sentences.size();
        for(int i =0; i<sz; i++){
            int count =1;
            int ss = sentences[i].size();
          for(int j=0; j<ss; j++){
              
              if(sentences[i][j] == ' ')
                  count= count+1;
              if (count>max)
                max = count;
          }
            
        }
        return max;
    }
};