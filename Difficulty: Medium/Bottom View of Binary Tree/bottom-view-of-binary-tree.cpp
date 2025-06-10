// Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        map<int,int> mpp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                int line=node.second;
                if(mpp.find(line)==mpp.end()){
                    mpp[line]=node.first->data;
                }else{
                    mpp[line]=node.first->data;
                }
                if(node.first->left){
                    q.push({node.first->left,line-1});
                }
                if(node.first->right){
                    q.push({node.first->right,line+1});
                }
            }
        }
        vector<int> ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};