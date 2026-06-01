class Solution {
  public:
    vector<string>ans;
    void generate(string& s,int pos)
    {
        if(pos==s.size())
        {
            ans.push_back(s);
            return;
        }
        for(int i=pos;i<s.size();i++)
        {
            swap(s[pos],s[i]);
            generate(s,pos+1);
            swap(s[pos],s[i]);
        }
    }
    vector<string> permutation(string s) {
        // code here
        generate(s,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};