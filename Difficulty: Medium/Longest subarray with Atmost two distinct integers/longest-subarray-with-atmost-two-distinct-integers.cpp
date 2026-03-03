class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int l=0;
        int ans=0;
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
            while(m.size()>2)
            {
                m[arr[l]]--;
                if(m[arr[l]]==0)
                {
                    m.erase(arr[l]);
                }
                l++;
            }
            ans=max(i-l+1,ans);
        }
        return ans;
    }
};