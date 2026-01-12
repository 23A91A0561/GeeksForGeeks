class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        int l=0;
        deque<int>q;
        vector<int>v;
        for(int i=0;i<arr.size();i++)
        {
            while(!q.empty() && arr[q.back()]<=arr[i])
            {
                q.pop_back();
            }
            if(!q.empty() && q.front()<l)
            {
                q.pop_front();
            }
            q.push_back(i);
            if(i-l+1==k)
            {
                v.push_back(arr[q.front()]);
                l++;
            }
        }
        return v;
    }
};