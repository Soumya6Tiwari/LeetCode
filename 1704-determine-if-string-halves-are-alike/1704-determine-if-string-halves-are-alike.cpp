class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int i,j,k,count1=0,count2=0;
        
        
        for(i=0;i<s.size()/2;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                count1++;
            }
            
        }
        for(i=s.size()/2;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                count2++;
            }
        }
        if(count1==count2)
        {
            return true;
        }
        return false;
    }
};