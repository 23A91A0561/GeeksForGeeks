class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int>v;
        for(auto &i:arr)
        {
            if(i!=0)
            {
                v.push_back(i);
            }
        }
        int n=v.size();
        for(int i=0;i<arr.size()-n;i++)
        {
            v.push_back(0);
        }
        arr.clear();
        arr=v;
    }
};