class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int>s;
        for(auto &i:arr)
        {
            if(s.find(target-i)!=s.end())
            {
                return true;
            }
            s.insert(i);
        }
        return false;
    }
};