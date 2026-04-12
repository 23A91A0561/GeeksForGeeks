class Solution {
  public:
    bool isToeplitz(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<int>check(n+m-1,-1);
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(check[i-j+(m-1)]==-1)
                {
                    check[i-j+(m-1)]=mat[i][j];
                }
                else
                {
                    if(check[i-j+(m-1)]!=mat[i][j])
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};