class Solution {
public:
    string reverseVowels(string s) {
         int i,j=0;
        vector<char>v;
    
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                v.push_back(s[i]);
                
            }
        }
        reverse(v.begin(),v.end());
        for(i=0;i<s.size();i++)
        {
                      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                       {
                           s[i]=v[j];
                         j++;
                       }
        }
        return s;
        
        
    }
};