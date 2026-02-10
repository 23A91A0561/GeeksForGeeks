// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        unordered_set<int>s1,s2;
        int z=0;
        for(auto &i:arr)
        {
            if(i>0)
            {
                s1.insert(i);
            }
            else if(i<0)
            {
                s2.insert(i);
            }
            else
            {
                z++;
            }
        }
        vector<vector<int>>ans;
        for(auto &i:s1)
        {
            if(s2.find(i*-1)!=s2.end())
            {
                ans.push_back({i*-1,i});
            }
        }
        if(z>1)
        {
            ans.push_back({0,0});
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};