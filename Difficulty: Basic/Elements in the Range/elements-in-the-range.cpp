class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        unordered_set<int>s;
        for(auto &i:arr)
        {
            s.insert(i);
        }
        for(int i=start;i<=end;i++)
        {
            if(s.find(i)==s.end())
            {
                return false;
            }
        }
        return true;
    }
};
