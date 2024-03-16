class Solution {
public:
    
    string sortVowels(string s)
    {
        int i,j=0;
        vector<char>v;
        string str="";
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                v.push_back(s[i]);
                s[i]='@';
            }
        }
        sort(v.begin(),v.end());
        
        for(i=0;i<s.size();i++)
        {
                       if(s[i]=='@')
                       {
                           s[i]=v[j];
                           j++;
                       }
        
        }

        
        return s;

    
    }
};