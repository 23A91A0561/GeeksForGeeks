/* Structure of binary tree node
class Node{
public:
    int data;
    Node* left, right;
    Node(int item)
    {
        data = item;
        left = nullptr;
        right = nullptr;
    }
}
*/
class Solution {
  public:
    map<int,int>m;
    void check(Node* root,int h)
    {
        if(root==NULL)
        {
            return;
        }
        
        m[h]+=root->data;
        check(root->left,h-1);
        
        check(root->right,h+1);
        
    }
    vector<int> verticalSum(Node* root) {
        // code here
        check(root,0);
        vector<int>ans;
        for(auto &i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};