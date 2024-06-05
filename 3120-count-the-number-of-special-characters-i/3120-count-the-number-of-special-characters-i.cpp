class Solution {
public:
    int numberOfSpecialChars(string word)
    {
        sort(word.begin(),word.end());
        int i,j,k,count=0;
        vector<char>v,v1;
        set<char>s,s1;
        for(i=0;i<word.size();i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            {
                s.insert(word[i]);
            }
            if(word[i]>='A'&&word[i]<='Z')
            {
                s1.insert(word[i]);
            }
            
        }
        v.assign(s.begin(),s.end());
        v1.assign(s1.begin(),s1.end());
        for(i=0;i<v.size();i++)
        {
            for(j=0;j<v1.size();j++)
            {
                if(v[i]==v1[j]+32)
                {
                    count++;
                }
            }
        }
        return count;
    }
};