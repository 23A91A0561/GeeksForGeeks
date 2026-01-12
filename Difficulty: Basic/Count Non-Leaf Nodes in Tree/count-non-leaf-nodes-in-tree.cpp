/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int c=0;
    void count(Node* root)
    {
        if(!root)
        {
            return;
        }
        count(root->left);
        if(root->left!=NULL || root->right!=NULL)
        {
            c++;
        }
        count(root->right);
    }
    int countNonLeafNodes(Node* root) {
        // Code here
        count(root);
        return c;
    }
};