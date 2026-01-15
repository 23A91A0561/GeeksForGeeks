/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string s=to_string(n);
        for(auto &i:s)
        {
            if(i=='0')
            {
                i='5';
            }
        }
        return stoi(s);
    }
};