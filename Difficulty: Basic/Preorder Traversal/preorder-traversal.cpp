/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int>v={};
    void pre(Node* root)
    {
        if(!root)
        {
            return;
        }
        v.push_back(root->data);
        pre(root->left);
        pre(root->right);
    }
    vector<int> preOrder(Node* root) {
        // code here
        v.clear();
        pre(root);
        return v;
    }
};