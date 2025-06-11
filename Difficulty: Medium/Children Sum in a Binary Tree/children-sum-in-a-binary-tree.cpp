/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    bool isLeaf(Node* node) {
    return node && !node->left && !node->right;
}
    bool checker(Node* root){
         if(root==NULL){
            return true;
        }
        int cur=root->data;
       
        if(isLeaf(root)){
            return true;
        }
        
        int sum=0;
        if(root->left!=NULL){
            sum=sum+root->left->data;
        }
        if(root->right!=NULL){
            sum=sum+root->right->data;
        }
        if(sum==cur){
            return checker(root->left) && checker(root->right);
        }
        return false;
    }
    int isSumProperty(Node *root) {
        // Add your code here
        if(checker(root)){
            return 1;
        }
        return 0;
        
    }
};