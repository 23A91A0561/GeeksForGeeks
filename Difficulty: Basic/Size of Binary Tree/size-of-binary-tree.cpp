/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int ans=0;
    void get_size(Node * root)
    {
        if(!root)
        {
            return;
        }
        get_size(root->left);
        ans++;
        get_size(root->right);
    }
    int getSize(Node* root) {
        // code here
        get_size(root);
        return ans;
    }
};