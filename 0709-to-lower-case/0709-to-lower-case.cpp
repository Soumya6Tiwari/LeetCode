class Solution {
public:
    string toLowerCase(string s) 
    {
        int i,j,k;
        char ch1,ch2;
        for(i=0;i<s.length();i++)
        {
            j=(int)(s[i]);
            if(j>=65&&j<91)
            {
                j=j+32;
                ch1=(char)(j);
                s[i]=ch1;
            }
            
        }
        return s;
        
    }
};