class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        int Min=*min_element(arr.begin(),arr.end());
        return Min;
    }
};