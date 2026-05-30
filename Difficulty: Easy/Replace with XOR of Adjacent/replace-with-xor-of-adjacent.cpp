class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        // code here
        vector<int>v(arr.size());
        for(int i=0;i<arr.size();i++)
        {
            if(i==0)
            {
                v[i]=arr[i]^arr[i+1];
            }
            else if(i==arr.size()-1)
            {
                v[i]=arr[i]^arr[i-1];
            }
            else
            {
                v[i]=arr[i+1]^arr[i-1];
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=v[i];
        }
    }
};