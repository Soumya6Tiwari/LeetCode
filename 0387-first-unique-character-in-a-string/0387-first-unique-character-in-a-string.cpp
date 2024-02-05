class Solution {
public:
    int firstUniqChar(string s)
    {
        map<char,int>m;
        vector<char>v;
        int i,j,k;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        for(i=0;i<s.size();i++)
        {
            if(m[s[i]]==1)
                 {
                     return i;
                 }
        }
                 return -1;
    }
};