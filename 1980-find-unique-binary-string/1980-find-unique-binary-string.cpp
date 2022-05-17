class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string s;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i][i]=='0') s+= '1';
            else s+= '0';
        }
        //please remember the below logic.
       // Basically if you take the input vector of strings as a 2D array then if we go diagonally and place the opposite of the character we find in the current ith string then the output that is generated will always be different from all of the given strings. Complexity: O(n)
        
        return s;
    }
};