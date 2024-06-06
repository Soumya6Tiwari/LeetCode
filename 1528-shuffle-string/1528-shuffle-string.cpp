class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        vector<char>v;
        int i,j=0,k;
        string ans="";
        
        map<int,char>m1;
        for(i=0;i<indices.size();i++)
        {
            m1.insert({indices[i],s[j]});
            j++;
        }
        for(auto i=m1.begin();i!=m1.end();i++)
        {
            v.push_back(i->second);
        }
        for(i=0;i<v.size();i++)
        {
            ans=ans+v[i];
        }
        return ans;
    }
};