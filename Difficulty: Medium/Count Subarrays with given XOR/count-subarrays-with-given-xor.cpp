class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>m;
        long c=0;
        int x=0;
        m[0]=1;
        for(int i=0;i<arr.size();i++)
        {
            x^=arr[i];
            if(m.find(x^k)!=m.end())
            {
                c+=m[x^k];
            }
            m[x]++;
        }
        return c;
    }
};