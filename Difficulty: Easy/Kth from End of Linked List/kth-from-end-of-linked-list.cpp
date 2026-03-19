/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int count=0;
        auto temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count<k)
        {
            return -1;
        }
        while(count--!=k)
        {
            head=head->next;
        }
        return head->data;
    }
};