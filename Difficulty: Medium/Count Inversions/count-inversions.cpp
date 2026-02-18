class Solution {
  public:
    int ans=0;
    void msort(vector<int>& arr,int l,int m,int h)
    {
        int i=l,j=m+1,k=0;
        vector<int>res(h-l+1);
        int size=m-l+1;
        while(i<=m && j<=h)
        {   
            if(arr[i]<=arr[j])
            {
                res[k++]=arr[i++];
            }
            else
            {  
                ans+=(size-(i-l));
                res[k++]=arr[j++];
            }
        }
        while(i<=m)
        {
            
            res[k++]=arr[i++];
        }
        while(j<=h)
        {
            res[k++]=arr[j++];
        }
        k=0,i=l;
        for(int k=0;k<res.size();k++){
            arr[i++]=res[k];
        }
    }
    void mege(vector<int>& v,int l,int h)
    {
        if(l<h)
        {
            int m=(l+h)/2;
            mege(v,l,m);
            mege(v,m+1,h);
            msort(v,l,m,h);
        }
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        mege(arr,0,arr.size()-1);
        return ans;
    }
};