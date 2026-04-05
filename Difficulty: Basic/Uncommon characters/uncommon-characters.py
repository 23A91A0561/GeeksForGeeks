#User function Template for python3

class Solution:
    # Function to find uncommon characters between two strings.
    def uncommonChars(self, s1, s2):
        #code here
        li=list(sorted(set(s1)^set(s2)))
        s=""
        for i in li:
            s+=i
        
        return s;