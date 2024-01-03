class Solution {
public:
    int countGoodSubstrings(string s)
    {
        int i,j,k,count=0;
        
        vector<int>v;
        i=0;
        j=0;
        while(j<s.size())
        {
            if(j-i+1<3)
            {
                v.push_back(s[j]);
                j++;
            }
            if(j-i+1==3)
            {
                v.push_back(s[j]);
                if(v[0]!=v[1]&&v[0]!=v[2]&&v[1]!=v[2])
                {
                    count++;
                }
                i++;
                j++;
                reverse(v.begin(),v.end());
                v.pop_back();
                reverse(v.begin(),v.end());
                
            }
            
        }
        return count;
        
    }
};