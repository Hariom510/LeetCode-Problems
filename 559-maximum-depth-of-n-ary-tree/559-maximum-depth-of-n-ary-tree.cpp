/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    //bfs solution rem
    int maxDepth(Node* root) {
        if(root==0) return 0;
        queue<Node*> q;
        q.push(root);
        int res=0;
        while(!q.empty()){
            res++;
            int sz = q.size();
            for(int i=0; i<sz; i++){
                Node* node = q.front();
                q.pop();
                
                for(auto child: node->children){
                    if(child){
                        q.push(child);
                    }
                }
            }
        }
        return res;
        
        
        
    }
};