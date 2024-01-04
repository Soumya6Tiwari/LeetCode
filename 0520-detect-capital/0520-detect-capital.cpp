class Solution {
public:
    bool detectCapitalUse(string word)
    {
        int i,j,k,p,q,r;
        char ch1,ch2;
        if(word.length()==1)
        {
            return true;
        }
        if((int)word[0]>=65&&(int)word[0]<91)
        {
            if((int)word[1]>=97&&(int)word[1]<123)
            {
            for(k=2;k<word.length();k++)
            {
                p=(int)word[k];
                if(p>=97&&p<123)
                {
                    
                }
                else
                {
                    return false;
                }
            }
            }
        }
        if(k==word.length())
        {
            return true;
        }
        for(i=0;i<word.length();i++)
        {
            j=(int)(word[i]);
            if(j>=65&&j<91)
            {
                
            }
            
            else
            {
                break;
            }
        }
        
        if(i==word.length())
        {
            return true;
        }
         for(i=0;i<word.length();i++)
        {
            j=(int)(word[i]);
            if(j>=97&&j<123)
            {
                
            }
            
            else
            {
                break;
            }
        }
         if(i==word.length())
        {
            return true;
        }
        
        return false;
        
    }
};