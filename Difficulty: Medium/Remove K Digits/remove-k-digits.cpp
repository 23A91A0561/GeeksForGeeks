class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            while(!st.empty() && st.top()>s[i])
            {
                if(k==0)
                {
                    break;
                }
                k--;
                st.pop();
            }
            st.push(s[i]);
        }
        while(k>0)
        {
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        string res="";
        while(ans[0]=='0'){
            ans.erase(0,1);
        }
        if(ans.size()==0){
            return "0";
        }
        return ans;
    }
};