class Solution {
public:
    bool checkString(string s) 
    {
        int i,j,k;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
                j=i;
                break;
                
            }
            
        }
        for(i=j+1;i<s.length();i++)
        {
            if(s[i]=='a')
            {
                return false;
            }
        }
        return true;
        
    }
};