class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
       
        if(s.size()!=t.size())
        {
            return false;
        }
        map<char,char>s_to_t;
        map<char,char>t_to_s;
        int i,j,k;
        for(i=0;i<s.size();i++)
        {
            // iska matlab hai ki agar s[i] hamare map me nhi present hai to ghusha do
            if(s_to_t.find(s[i])==s_to_t.end())
            {
                s_to_t[s[i]]=t[i];
            }
            else
            {
                if(s_to_t[s[i]]!=t[i])
                {
                    return false;
                }
            }
        }
         for(i=0;i<t.size();i++)
        {
            // iska matlab hai ki agar t[i] hamare map me nhi present hai to ghusha do
            if(t_to_s.find(t[i])==t_to_s.end())
            {
                t_to_s[t[i]]=s[i];
            }
            else
            {
                if(t_to_s[t[i]]!=s[i])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};