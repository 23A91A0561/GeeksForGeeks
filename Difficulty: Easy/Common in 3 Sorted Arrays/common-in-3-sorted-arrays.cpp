class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        set<int>s1,s2,s3;
        for(auto &i:arr1)
        {
            s1.insert(i);
        }
        for(auto &i:arr2)
        {
            s2.insert(i);
        }
        for(auto &i:arr3)
        {
            s3.insert(i);
        }
        map<int,int>m;
        for(auto &i:s1)
        {
            m[i]++;
        }
        for(auto &i:s2)
        {
            m[i]++;
        }
        for(auto &i:s3)
        {
            m[i]++;
        }
        vector<int>ans;
        for(auto &i:m)
        {
            if(i.second==3)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};