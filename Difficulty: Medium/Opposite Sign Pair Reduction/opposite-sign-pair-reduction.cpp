class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        // code here
        stack<int>s;
        for(int i=0;i<arr.size();i++)
        {
            int flag=1;
            while(!s.empty() && s.top()*arr[i]<0)
            {
                if(abs(s.top())>abs(arr[i]))
                {
                    flag=0;
                    break;
                }
                else if(abs(s.top())<abs(arr[i]))
                {
                    s.pop();
                }
                else
                {
                    flag=0;
                    s.pop();
                    break;
                }
            }
            if(flag)
            {
                s.push(arr[i]);
            }
        }
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};