/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int>ans;
    void get(Node* root)
    {
        if(!root)
        {
            return;
        }
        get(root->left);
        ans.push_back(root->data);
        get(root->right);
    }
    vector<int> inOrder(Node* root) {
        // code here
        get(root);
        return ans;
    }
};