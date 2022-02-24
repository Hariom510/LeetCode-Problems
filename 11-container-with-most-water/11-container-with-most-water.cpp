class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        
        int maxArea =0;
        int l = 0;
        int r = n-1;
        while(l<r){
            int lh = height[l];
            int rh = height[r];
            
            maxArea = max(maxArea, min(lh, rh)*(r-l));
            
            if(lh<rh) l++;
            else r--;
            
        }
        return maxArea;
    }
};