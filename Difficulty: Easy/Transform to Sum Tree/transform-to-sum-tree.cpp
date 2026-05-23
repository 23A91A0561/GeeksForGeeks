/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int solve(Node* root)
    {
         if(root==NULL)
        {
            return 0;
        }
        int old=root->data;
        int left=solve(root->left);
        int right=solve(root->right);
        root->data=left+right;
        return root->data+old;
    }
    void toSumTree(Node *root) {
        // code here
        solve(root);
    }
};