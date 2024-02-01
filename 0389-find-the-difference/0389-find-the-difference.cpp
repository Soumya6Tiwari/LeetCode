class Solution {
public:
    char findTheDifference(string s, string t)
    {
        int i,j,k;
        vector<char>v;
        char ans=' ';
        for(i=0;i<s.length();i++)
        {
            v.push_back(s[i]);
            
        }
        for(i=0;i<t.length();i++)
        {
            v.push_back(t[i]);
            
        }
        for(i=0;i<v.size();i++)
        {
            ans=ans^v[i];
        }
     
        return ans+32;
        
    }
};