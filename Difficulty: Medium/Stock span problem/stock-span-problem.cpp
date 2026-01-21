class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<pair<int,int>>s;
        for(int i=0;i<arr.size();i++)
        {
            int temp=1;
            while(!s.empty() && arr[s.top().first]<=arr[i])
            {
                arr[s.top().first]=s.top().second;
                temp+=s.top().second;
                s.pop();
            }
            s.push({i,temp});
        }
        while(!s.empty())
        {
            arr[s.top().first]=s.top().second;
            s.pop();
        }
        return arr;
    }
};