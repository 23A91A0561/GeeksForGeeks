class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>st;
        for(auto &i:S)
        {
            st.push(i);
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};