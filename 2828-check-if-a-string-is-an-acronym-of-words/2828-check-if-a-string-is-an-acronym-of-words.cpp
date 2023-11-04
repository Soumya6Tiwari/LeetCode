class Solution {
public:
    bool isAcronym(vector<string>& words, string s) 
    {
        int i,j,k;
        vector<string>res;
        char ch;
        string ans="",value,value1;
        for(i=0;i<words.size();i++)
        {
            value=words[i];
            ch=value[0];
            value1=ch;
            
            res.push_back(value1);
        }
        for(i=0;i<res.size();i++)
        {
            ans=ans+res[i];
        }
        if(ans==s)
        {
            return true;
        }
        return false;
        
    }
};