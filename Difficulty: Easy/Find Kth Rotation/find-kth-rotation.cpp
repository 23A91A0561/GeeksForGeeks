class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        vector<int>temp=arr;
        for(auto &i:temp)
        {
            arr.push_back(i);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==temp[0])
            {
                return i;
            }
        }
        return 1;
    }
};
