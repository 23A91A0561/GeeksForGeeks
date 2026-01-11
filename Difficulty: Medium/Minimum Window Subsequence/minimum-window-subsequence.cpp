class Solution {
  public:
    string minWindow(string& s1, string& s2) {
        // Code here
        if(s2.size()>s1.size())
        {
            return "";
        }
        int i=0;
        string result="";
        int Min=INT_MAX;
        while(i<s1.size())
        {
            int j=0;
            while(i<s1.size() && j<s2.size())
            {
                if(s1[i]==s2[j])
                {
                    j++;
                    
                }
                i++;
            }
            if(j<s2.size())
            {
                break;
            }
            int end=i-1;
            j=s2.size()-1;
            i=end;
            while(i>=0 && j>=0)
            {
                if(s1[i]==s2[j])
                {
                    j--;
                }
                i--;
            }
            int start=i+1;
            if(end-start+1<Min)
            {
                Min=end-start+1;
                result=s1.substr(start,Min);
            }
            i=start+1;
        }
        return result;
    }
};
