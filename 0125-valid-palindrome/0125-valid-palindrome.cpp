class Solution {
public:
    bool isPalindrome(string s)
    {
       vector<char>v1;
       int i,j;
        string str="",str1;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
                v1.push_back(s[i]);
            }
           else if(s[i]>='a'&&s[i]<='z')
            {
                v1.push_back(s[i]);
            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                v1.push_back(s[i]);
            }
        }
        j=v1.size()-1;
       for(i=0;i<v1.size();i++)
       {
           if(i<=j)
           {
               if(v1[i]!=v1[j])
               {
                   return false;
               }
               else
               {
                   j--;
               }
           }
           
               
           
       }
        return true;
    }
};