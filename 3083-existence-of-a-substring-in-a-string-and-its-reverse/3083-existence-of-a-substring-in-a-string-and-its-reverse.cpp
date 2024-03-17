class Solution {
public:
    bool isSubstringPresent(string s) 
    {
        int i,j,k;
        for(i=0;i<s.size()-1;i++)
        {
            string str=s.substr(i,2);
            reverse(str.begin(),str.end());
            if(s.find(str)!=string::npos)
            {
                return true;
            }
        }
        return false;
        
    }
};