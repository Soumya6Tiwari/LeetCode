class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char,int>m1,m2;
        int i,j,k,f,s;
        for(i=0;i<ransomNote.size();i++)
        {
            m1[ransomNote[i]]++;
        }
        for(i=0;i<magazine.size();i++)
        {
            m2[magazine[i]]++;
        }
        for(auto j:m1)
        {
            f=j.first;
            s=j.second;
            if(m2.find(f)!=m2.end())
            {
                if(m2[f]<s)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};