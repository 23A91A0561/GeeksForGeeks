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
    void get(Node* root,int key)
    {
        if(key>root->data)
        {
            if(!root->right)
            {
                Node* newNode=new Node(key);
                root->right=newNode;
                return;
            }
            get(root->right,key);
        }
        if(key<root->data)
        {
            if(!root->left)
            {
                Node* newNode=new Node(key);
                root->left=newNode;
                return;
            }
            get(root->left,key);
        }
    }
    Node* insert(Node* root, int key) {
        //  code  here
        get(root,key);
        return root;
    }
};