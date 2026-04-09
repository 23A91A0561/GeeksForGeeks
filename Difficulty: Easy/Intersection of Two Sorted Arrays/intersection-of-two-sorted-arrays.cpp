class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s1,s2;
        for(auto &i:a)
        {
            s1.insert(i);
        }
        for(auto &i:b)
        {
            s2.insert(i);
        }
        vector<int>ans;
        for(auto &i:s1)
        {
            if(s2.find(i)!=s2.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};