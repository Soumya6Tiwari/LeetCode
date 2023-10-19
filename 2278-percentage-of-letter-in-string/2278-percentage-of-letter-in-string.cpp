class Solution {
public:
    int percentageLetter(string s, char letter) 
    {
        int i,j,k,count=0,percentage;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==letter)
            {
                count++;
            }
        }
         percentage=(count*100)/s.length();
        return percentage;
        
    }
};