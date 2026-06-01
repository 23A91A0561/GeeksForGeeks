class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int l=0,h=s.size()-1;
        for(auto &i:s)
        {
            if((i>='A' && i<='Z')||(i>='a' && i<='z'))
            {
                i=(i&'_');
            
            }
        }
        while(l<h)
        {
            while(!((s[l]>='A' && s[l]<='Z') || (s[l]>='0' && s[l]<='9')) && l<h)
            {
                l++;
            }
            while(!((s[h]>='A' && s[h]<='Z') || (s[h]>='0' && s[h]<='9')) && l<h)
            {
                h--;
            }
           // cout <<s[l] <<" " <<s[h] <<endl;
            if(s[l]!=s[h])
            {
                return false;
            }
            
             l++;
            h--;
           
            
        }
        return true;
    }
};