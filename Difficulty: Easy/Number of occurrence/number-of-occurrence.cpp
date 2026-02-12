class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        map<int,int>m;
        for(auto &i:arr)
        {
            m[i]++;
        }
        return m[target];
    }
};
