class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        unordered_set<int>s;
        for(auto &i:arr)
        {
            if(i==0)
            {
                if(target==0 && s.size()>0)
                {
                    return true;
                }
            }
            else
            {
                if(target%i==0 && s.find(target/i)!=s.end())
                {
                    return true;
                }
            }
            s.insert(i);
        }
        return false;
    }
};