class Solution {
  public:
    vector<int> kthLargest(vector<int>& arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>heap;
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            heap.push(arr[i]);
            if(heap.size()>k)
            {
                heap.pop();
            }
            if(i+1<k)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(heap.top());
            }
        }
        return ans;
    }
};