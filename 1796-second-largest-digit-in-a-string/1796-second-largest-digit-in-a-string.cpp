class Solution {
public:
    int secondHighest(string s) 
    {
        int i,j,k;
        int val;
        vector<int>res;
        set<int>st;
        string str;
        
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            {
            
            
            str=s[i];
            val=stoi(str);
            
                st.insert(val);
            
        } 
        }
        if(st.size()==1||st.size()==0)
        {
            return -1;
        }
        res.assign(st.begin(),st.end());
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        return res[1];
    }
};