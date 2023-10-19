class Solution {
public:
    int minimizedStringLength(string s) 
    {
        vector<char>result;
        set<char>val;
        int i,j,k;
        for(i=0;i<s.length();i++)
        {
            val.insert(s[i]);
        }
        result.assign(val.begin(),val.end());
        return result.size();
        
    }
};