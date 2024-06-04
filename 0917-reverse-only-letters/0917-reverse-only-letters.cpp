class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        vector<char>v,v1;
        int i,j,k;
        string ans="";
        for(i=0;i<s.size();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                v.push_back(s[i]);
            }
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                v1.push_back('\"');
            }
            else
            {
                v1.push_back(s[i]);
                
            }
        }
        reverse(v.begin(),v.end());
        j=0;
        for(i=0;i<v1.size();i++)
        {
            if(v1[i]=='\"')
            {
                v1[i]=v[j];
                j++;
            }
        }
        for(i=0;i<v1.size();i++)
        {
            ans=ans+v1[i];
        }
        return ans;
    }
};