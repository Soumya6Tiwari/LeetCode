class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int n1,n2,i=0,j=0,k;
        vector<char>v;
        n1=word1.size();
        n2=word2.size();
        string ans="";
        while(i<n1||j<n2)
        {
            if(i>=n1)
            {
                v.push_back(word2[j]);
                j++;
            }
            else if(j>=n2)
            {
                v.push_back(word1[i]);
                i++;
            }
            else
            {
                v.push_back(word1[i]);
                v.push_back(word2[j]);
                i++;
                j++;
            }
        }
        // reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            ans=ans+v[i];
        }
        return ans;
    }
};