class Solution {
  public:
    bool isMaxHeap(vector<int> &arr) {
        // code here
        if(arr.size()==1)
        {
            return true;
        }
        for(int i=1;i<arr.size();i++)
        {
            if(i%2==0)
            {
                if(arr[(i-1)/2]<arr[i])
                {
                    return false;
                }
            }
            else
            {
                if(arr[i/2]<arr[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
