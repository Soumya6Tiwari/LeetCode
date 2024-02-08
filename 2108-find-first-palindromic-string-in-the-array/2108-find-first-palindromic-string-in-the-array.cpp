class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        vector<string>v,v1;
        string s1="",s2="";
        int i,j,k;
        for(i=0;i<words.size();i++)
        {
            s1=words[i];
            
         for(j=s1.size()-1;j>=0;j--)
        {
            
            s2=s2+s1[j];
        }
            if(s1==s2)
        {
            return words[i];
                
        }
            s1="";
            s2="";
        }
        
        
        
        return "";
        
    }
};