/*
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
    vector<int>ans;
    void get(Node* root,int level)
    {
        if(!root)
        {
            return;
        }
        if(level==ans.size())
        {
            ans.push_back(root->data);
        }
        get(root->left,level+1);
        get(root->right,level+1);
        
    }
    vector<int> leftView(Node *root) {
        // code here
        get(root,0);
        return ans;
    }
};