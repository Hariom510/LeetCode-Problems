class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // vector<vector<int>> mat;
        
       
        //reverse
        for(int i=0; i<image.size(); i++){
            vector<int> v = image[i];
            reverse(v.begin(), v.end());
            image[i] = v;
        }
        //invert
        for(int i=0; i<image.size(); i++){
            for(int j= 0; j<image[i].size(); j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }
            }
        }
        return image;
        
    }
};