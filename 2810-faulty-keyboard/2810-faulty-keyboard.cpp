class Solution {
public:
    string finalString(string s) 
    {
       vector<char>v;
        int i,j,k;
        string ans="";
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='i')
            {
                v.push_back(s[i]);
            }
            else if(s[i]=='i')
            {
                reverse(v.begin(),v.end());
            }
        }
        for(i=0;i<v.size();i++)
        {
            ans=ans+v[i];
        }
        return ans;
    }
};