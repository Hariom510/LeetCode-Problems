class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       
        int n1 = nums1.size();
        int n2 = nums2.size();
         vector<int> v(n1,-1);
        
        stack<int> s1;
        stack<int> s2;
        
//         for(int i= n2-1; i>=0; i--){
//             s1.push(nums1[i]);
//         }
        
        for(auto i: nums2)s2.push(i);
        
//         stack<int> s3;
//         while(!s1.empty()){
//             s3 = s2;
//             if(s1.top()==s2.top()){
                
//                 s1.pop();
//             }
//             else if(s2.top)
        
        for(int i=0; i<n1; i++){
         stack<int> s3 = s2;
            while(!s3.empty() && nums1[i]!=s3.top()){
                if(nums1[i]<s3.top()){
                    v[i]= s3.top();
                    
                }
                s3.pop();
            }
        }
        
        return v;
    }
};