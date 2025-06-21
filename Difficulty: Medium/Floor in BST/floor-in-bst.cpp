// Function to search a node in BST.
class Solution {

  public:
    int floor(Node* root, int x) {
        // Code here
        int floor=-1;
        while(root){
            if(root->data==x){
                return x;
            }else if(x<root->data){
                
                root=root->left;
            }else{
                floor=root->data;
                root=root->right;
            }
        }
        return floor;
    }
};