/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int Min=INT_MAX;
    void get(Node* root)
    {
        if(!root)
        {
            return;
        }
        get(root->left);
        get(root->right);
        Min=min(root->data,Min);
    }
    int minValue(Node* root) {
        // code here
        get(root);
        return Min;
    }
};