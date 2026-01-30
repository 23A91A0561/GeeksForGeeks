class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        vector<int>v;
        while(!q.empty())
        {
            v.push_back(q.front());
            q.pop();
        }
        int n=v.size();
        for(int i=0;i<n/2;i++)
        {
            q.push(v[i]);
            q.push(v[(n/2)+i]);
        }
    }
};