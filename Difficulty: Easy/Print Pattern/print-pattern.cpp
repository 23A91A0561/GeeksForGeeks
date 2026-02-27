class Solution {
  public:
    void generate(int n,vector<int>& ans)
    {
        ans.push_back(n);
        if(n<=0)
        {
            return;
        }
        
        generate(n-5,ans);
        ans.push_back(n);
    }
    vector<int> pattern(int n) {
        // code here
        vector<int>ans;
        generate(n,ans);
        return ans;
    }
};