class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        vector<int>MinArr(arr.size(),0);
        vector<int>MaxArr(arr.size(),0);
        MinArr[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            MinArr[i]=max(MinArr[i-1],arr[i]);
        }
        MaxArr[arr.size()-1]=arr[arr.size()-1];
        for(int i=arr.size()-2;i>=0;i--)
        {
            MaxArr[i]=max(MaxArr[i+1],arr[i]);
        }
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=min(MinArr[i],MaxArr[i])-arr[i];
        }
        return sum;
    }
};