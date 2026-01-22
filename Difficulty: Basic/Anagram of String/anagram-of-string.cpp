// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    // Your code goes here
    map<char,int>n;
    for(auto &i:s1)
    {
        n[i]++;
    }
    for(auto &i:s2)
    {
        n[i]--;
    }
    int sum=0;
 
    for(auto &i:n)
    {
        sum+=abs(i.second);
    }
    
    return sum;
}