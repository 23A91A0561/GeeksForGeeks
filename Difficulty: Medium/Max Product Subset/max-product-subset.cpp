class Solution {
  public:
    int findMaxProduct(vector<int>& arr) {
        // code here
        long long pro=1;
        int Max=INT_MIN;
        int mod=1e9+7;
        int nc=0,pc=0,z=0;
        for(auto &i:arr)
        {
            if(i<0)
            {
                pro=(pro*i)%mod;
                Max=max(i,Max);
                nc++;
            }
            if(i==0)
            {
                z++;
            }
            if(i>0)
            {
                pro=(pro*i)%mod;
                pc++;
            }
        }
        if((nc==1 && pc==0 && z>=1) || (z==arr.size()))
        {
            return 0;
        }
        if(arr.size()==1)
        {
            return arr[0];
        }
        if(pro>0)
        {
            return pro;
        }
        return pro/Max;
    }
};
