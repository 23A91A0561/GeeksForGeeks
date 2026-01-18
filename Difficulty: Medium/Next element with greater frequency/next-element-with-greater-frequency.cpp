class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        // code here
        map<int,int>m;
        stack<int>s;
        for(auto &i:arr)
        {
            m[i]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            while(!s.empty() && m[arr[s.top()]]<m[arr[i]])
            {
                arr[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            arr[s.top()]=-1;
            s.pop();
        }
        return arr;
    }
};
