class Solution {
public:
    int countKeyChanges(string s)
    {
        int i,j,k,count=0;
        set<char>st;
        for(i=0;i<s.length()-1;i++)
        {
           if(s[i]!=(s[i+1]-32)&&s[i]!=(s[i+1]+32)&&s[i]!=s[i+1])
           {
               count++;
           }
        }
        return count;
       
    }
};