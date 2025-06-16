/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    Node* level(Node* root,int k,unordered_map<Node*,Node*>& mpp){
        queue<Node*> q;
        q.push(root);
        Node* target=NULL;
        if(root->data==k){
            target=root;
        }
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* current=q.front();
                q.pop();
                if(current->left!=NULL){
                    q.push(current->left);
                    mpp[current->left]=current;
                }
                if(current->right!=NULL){
                    q.push(current->right);
                    mpp[current->right]=current;
                }
                if(current->data==k){
                    target=current;
                }
            }
        }
        return target;
    }
    int minTime(Node* root, int k) {
        // code here
        if(root==NULL){
            return 0;
        }
        unordered_map<Node*,Node*> parent;
        Node* target= level(root,k,parent);
        queue<Node*> q;
        unordered_map<Node*,bool> visited;
        q.push(target);
        int time=0;
        while(!q.empty()){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                Node* current=q.front();
                q.pop();
                visited[current]=true;
                if(current->left!=NULL && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left]=true;
                }
                if(current->right!=NULL && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right]=true;
                }
                if(parent[current] && !visited[parent[current]]){
                    q.push(parent[current]);
                    visited[parent[current]]=true;
                }
            }
            time++;
        }
        time--;
        return time;
    }
};