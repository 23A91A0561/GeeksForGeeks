class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>v(n+m-1,vector<int>());
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                v[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        for(auto &i:v)
        {
            for(auto &j:i)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
};