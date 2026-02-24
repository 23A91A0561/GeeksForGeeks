class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        for(int i=0;i<a1.size();i++)
        {
            a1[i]=a1[i]-a2[i];
        }
        for(int i=1;i<a1.size();i++)
        {
            a1[i]=a1[i]+a1[i-1];
        }
        unordered_map<int,int>m;
        m[0]=-1;
        int ans=0;
        for(int i=0;i<a1.size();i++)
        {
            if(m.find(a1[i])!=m.end())
            {
                ans=max(ans,i-m[a1[i]]);
            }
            else
            {
                m[a1[i]]=i;
            }
        }
        return ans;
    }
};