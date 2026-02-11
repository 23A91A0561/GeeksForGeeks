/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int dfs(Node* root,int height)
    {
        if(!root)
        {
            return 0;
        }
        int left=dfs(root->left,height);
        int right=dfs(root->right,height);
        return max(left,right)+1;
    }
    int height(Node* root) {
        // code here
        return dfs(root,0)-1;
    }
};