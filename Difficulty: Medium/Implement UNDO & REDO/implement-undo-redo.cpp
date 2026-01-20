class Solution {
  public:
    stack<char>s,r;
    void append(char x) {
        // append x into document
        s.push(x);
    }

    void undo() {
        // undo last change
        r.push(s.top());
        s.pop();
    }

    void redo() {
        // redo changes
        s.push(r.top());
        r.pop();
    }

    string read() {
        // read the document
        int n=s.size();
        stack<char>temp=s;
        string ans="";
        while(!temp.empty())
        {
            ans+=temp.top();
            temp.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};