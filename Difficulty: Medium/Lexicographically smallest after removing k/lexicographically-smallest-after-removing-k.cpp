class Solution {
  public:
    string lexicographicallySmallest(string &s, int k) {
        // code here
        int n=s.size();
        if((n&(n-1))==0)
        {
            k/=2;
        }
        else
        {
            k*=2;
        }
        if(k<0)
        {
            k=0;
        }
        if(s.size()<=k)
        {
            return "-1";
        }
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && (k>0) && (s[st.top()]>s[i]))
            {
                st.pop();
                k--;
            }
            st.push(i);
        }
        while (!st.empty() && k>0) {
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=s[st.top()];
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};