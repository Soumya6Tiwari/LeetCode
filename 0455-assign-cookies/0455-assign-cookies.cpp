class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        // g is no.of children
        // s is no. of cookies
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,r=0,greed_size,cookie_size;
        greed_size=g.size();
        cookie_size=s.size();
        while(l<cookie_size && r<greed_size)
        {
            if(s[l]>=g[r])
            {
                l++;
                r++;
            }
            else
            {
                l++;
            }
        }
        return r;
        
    }
};