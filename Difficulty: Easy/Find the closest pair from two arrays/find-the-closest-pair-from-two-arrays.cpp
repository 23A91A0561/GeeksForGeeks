class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr1.size();i++)
        {
            int l=0,h=arr2.size()-1;
            int best=0;
            int check=INT_MAX;
            while(l<=h)
            {
                int m=(l+h)/2;
                if(arr2[m]+arr1[i]==x)
                {
                    return {arr1[i],arr2[m]};
                }
                else if(arr2[m]+arr1[i]<x)
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
                if(check>abs(arr2[m]+arr1[i]-x))
                {
                    check=abs(arr2[m]+arr1[i]-x);
                    best=m;
                }
            }
            // cout<<best<<' ';
            if(ans.empty()||abs(ans[0]+ans[1]-x)>abs(arr1[i]+arr2[best]-x)){
                ans.clear();
                ans.push_back(arr1[i]);
                ans.push_back(arr2[best]);
            }
        }
        // cout <<ans[0] <<" " <<ans[1] <<endl;
        return {ans[0],ans[1]};
    }
};